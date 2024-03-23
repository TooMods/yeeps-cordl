#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__Light2D_impl.hpp"
#include "UnityEngine/U2D/zzzz__Light2DBase_impl.hpp"
#include "UnityEngine/zzzz__BoundingSphere_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Light2D_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Light2D_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightUtility_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__Light2D__DeprecatedLightType::__Light2D__DeprecatedLightType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__Light2D__DeprecatedLightType::__Light2D__DeprecatedLightType() {}
constexpr ::UnityEngine::Rendering::Universal::__Light2D__DeprecatedLightType UnityEngine::Rendering::Universal::__Light2D__DeprecatedLightType::Parametric{ static_cast<int32_t>(0x0) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__Light2D__LightType::__Light2D__LightType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__Light2D__LightType::__Light2D__LightType() {}
constexpr ::UnityEngine::Rendering::Universal::__Light2D__LightType UnityEngine::Rendering::Universal::__Light2D__LightType::Parametric{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::__Light2D__LightType UnityEngine::Rendering::Universal::__Light2D__LightType::Freeform{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::__Light2D__LightType UnityEngine::Rendering::Universal::__Light2D__LightType::Sprite{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::__Light2D__LightType UnityEngine::Rendering::Universal::__Light2D__LightType::Point{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::Universal::__Light2D__LightType UnityEngine::Rendering::Universal::__Light2D__LightType::Global{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality::__Light2D__NormalMapQuality(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality::__Light2D__NormalMapQuality() {}
constexpr ::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality::Disabled{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality::Fast{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality::Accurate{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation::__Light2D__OverlapOperation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation::__Light2D__OverlapOperation() {}
constexpr ::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation UnityEngine::Rendering::Universal::__Light2D__OverlapOperation::Additive{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation UnityEngine::Rendering::Universal::__Light2D__OverlapOperation::AlphaBlend{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__Light2D__ComponentVersions::__Light2D__ComponentVersions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__Light2D__ComponentVersions::__Light2D__ComponentVersions() {}
constexpr ::UnityEngine::Rendering::Universal::__Light2D__ComponentVersions UnityEngine::Rendering::Universal::__Light2D__ComponentVersions::Version_Unserialized{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::__Light2D__ComponentVersions UnityEngine::Rendering::Universal::__Light2D__ComponentVersions::Version_1{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_vertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex, ::Array<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex>*> (
        ::UnityEngine::Rendering::Universal::Light2D::*)()>(&::UnityEngine::Rendering::Universal::Light2D::get_vertices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f32998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_vertices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.set_vertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)(
    ::ArrayW<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex, ::Array<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex>*>)>(
    &::UnityEngine::Rendering::Universal::Light2D::set_vertices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f329a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_vertices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::ArrayW<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex, ::Array<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_indices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint16_t, ::Array<uint16_t>*> (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_indices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f329a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_indices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.set_indices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)(::ArrayW<uint16_t, ::Array<uint16_t>*>)>(
    &::UnityEngine::Rendering::Universal::Light2D::set_indices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f329b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_indices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t, ::Array<uint16_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_affectedSortingLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_affectedSortingLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f329b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_affectedSortingLayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_lightCookieSpriteInstanceID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_lightCookieSpriteInstanceID)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2f329c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "get_lightCookieSpriteInstanceID",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_boundingSphere
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::BoundingSphere (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_boundingSphere)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f329d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_boundingSphere", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.set_boundingSphere
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)(::UnityEngine::BoundingSphere)>(
    &::UnityEngine::Rendering::Universal::Light2D::set_boundingSphere)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f329e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_boundingSphere", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::BoundingSphere>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_lightMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_lightMesh)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2f329ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_lightMesh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_hasCachedMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_hasCachedMesh)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2f32a94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_hasCachedMesh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_lightType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::__Light2D__LightType (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_lightType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f32ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_lightType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.set_lightType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)(::UnityEngine::Rendering::Universal::__Light2D__LightType)>(
    &::UnityEngine::Rendering::Universal::Light2D::set_lightType)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2f32adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_lightType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__Light2D__LightType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_blendStyleIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_blendStyleIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f32e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_blendStyleIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.set_blendStyleIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::Light2D::set_blendStyleIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f32e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_blendStyleIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_shadowIntensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_shadowIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f32e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_shadowIntensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.set_shadowIntensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::Light2D::set_shadowIntensity)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2f32e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_shadowIntensity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_shadowsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_shadowsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f32e74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_shadowsEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.set_shadowsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Light2D::set_shadowsEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f32e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_shadowsEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_shadowVolumeIntensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_shadowVolumeIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f32e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_shadowVolumeIntensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.set_shadowVolumeIntensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::Light2D::set_shadowVolumeIntensity)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2f32e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_shadowVolumeIntensity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_volumetricShadowsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_volumetricShadowsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f32eac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_volumetricShadowsEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.set_volumetricShadowsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Light2D::set_volumetricShadowsEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f32eb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_volumetricShadowsEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_color
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f32ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_color", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.set_color
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)(::UnityEngine::Color)>(
    &::UnityEngine::Rendering::Universal::Light2D::set_color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f32ecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_color", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_intensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f32ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_intensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.set_intensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::Light2D::set_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f32ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_intensity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_volumeOpacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_volumeOpacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f32ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_volumeOpacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_volumeIntensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_volumeIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f32ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_volumeIntensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_volumeIntensityEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_volumeIntensityEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f32ef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_volumeIntensityEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.set_volumeIntensityEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Light2D::set_volumeIntensityEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f32f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_volumeIntensityEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_lightCookieSprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Sprite> (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_lightCookieSprite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2f32f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_lightCookieSprite", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.set_lightCookieSprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)(::UnityEngine::Sprite*)>(
    &::UnityEngine::Rendering::Universal::Light2D::set_lightCookieSprite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f32f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_lightCookieSprite", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_falloffIntensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_falloffIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f32f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_falloffIntensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.set_falloffIntensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::Light2D::set_falloffIntensity)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2f32f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_falloffIntensity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_alphaBlendOnOverlap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_alphaBlendOnOverlap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2f32f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_alphaBlendOnOverlap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_overlapOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_overlapOperation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f32f64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_overlapOperation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.set_overlapOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)(
    ::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation)>(&::UnityEngine::Rendering::Universal::Light2D::set_overlapOperation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f32f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_overlapOperation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_lightOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_lightOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f32f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_lightOrder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.set_lightOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::Light2D::set_lightOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f32f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_lightOrder",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_normalMapDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_normalMapDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f32f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_normalMapDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_normalMapQuality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_normalMapQuality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f32f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_normalMapQuality", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_renderVolumetricShadows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_renderVolumetricShadows)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2f32f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_renderVolumetricShadows", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.MarkForUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::MarkForUpdate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f32fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "MarkForUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.CacheValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::CacheValues)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2f32fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "CacheValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.GetTopMostLitLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::GetTopMostLitLayer)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2f32ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "GetTopMostLitLayer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.UpdateSpriteMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::UpdateSpriteMesh)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2f331c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "UpdateSpriteMesh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.UpdateMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Light2D::UpdateMesh)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2f32b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "UpdateMesh",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.UpdateBoundingSphere
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::UpdateBoundingSphere)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x2f34a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "UpdateBoundingSphere", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.IsLitLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Light2D::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::Light2D::IsLitLayer)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2f34c60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "IsLitLayer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)()>(&::UnityEngine::Rendering::Universal::Light2D::Awake)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2f34cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)()>(&::UnityEngine::Rendering::Universal::Light2D::OnEnable)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f34e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)()>(&::UnityEngine::Rendering::Universal::Light2D::OnDisable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f34fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::LateUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2f350b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "LateUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f350e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "OnBeforeSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2f350f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "OnAfterDeserialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_pointLightInnerAngle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_pointLightInnerAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f35168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_pointLightInnerAngle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.set_pointLightInnerAngle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::Light2D::set_pointLightInnerAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f35170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_pointLightInnerAngle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_pointLightOuterAngle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_pointLightOuterAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f35178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_pointLightOuterAngle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.set_pointLightOuterAngle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::Light2D::set_pointLightOuterAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f35180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_pointLightOuterAngle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_pointLightInnerRadius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_pointLightInnerRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f35188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_pointLightInnerRadius", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.set_pointLightInnerRadius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::Light2D::set_pointLightInnerRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f35190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_pointLightInnerRadius",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_pointLightOuterRadius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_pointLightOuterRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f35198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_pointLightOuterRadius", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.set_pointLightOuterRadius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::Light2D::set_pointLightOuterRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f351a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_pointLightOuterRadius",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_pointLightDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_pointLightDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f351a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_pointLightDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_pointLightQuality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_pointLightQuality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f351b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_pointLightQuality", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_isPointLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_isPointLight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2f34c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_isPointLight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_shapeLightParametricSides
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_shapeLightParametricSides)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f351b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_shapeLightParametricSides", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_shapeLightParametricAngleOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_shapeLightParametricAngleOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f351c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "get_shapeLightParametricAngleOffset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_shapeLightParametricRadius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_shapeLightParametricRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f351c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_shapeLightParametricRadius", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.set_shapeLightParametricRadius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::Light2D::set_shapeLightParametricRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f351d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_shapeLightParametricRadius",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_shapeLightFalloffSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::Light2D::*)()>(
    &::UnityEngine::Rendering::Universal::Light2D::get_shapeLightFalloffSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f351d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_shapeLightFalloffSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.set_shapeLightFalloffSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::Light2D::set_shapeLightFalloffSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2f351e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_shapeLightFalloffSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.get_shapePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> (::UnityEngine::Rendering::Universal::Light2D::*)()>(&::UnityEngine::Rendering::Universal::Light2D::get_shapePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f351f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                               "get_shapePath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.set_shapePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)(
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>)>(&::UnityEngine::Rendering::Universal::Light2D::set_shapePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f351f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_shapePath", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D.SetShapePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)(
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>)>(&::UnityEngine::Rendering::Universal::Light2D::SetShapePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f35200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "SetShapePath", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2D::*)()>(&::UnityEngine::Rendering::Universal::Light2D::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2f35208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::Rendering::Universal::Light2D::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Rendering::Universal::Light2D::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::Rendering::Universal::__Light2D__ComponentVersions& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_ComponentVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ComponentVersion;
}
constexpr ::UnityEngine::Rendering::Universal::__Light2D__ComponentVersions const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_ComponentVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ComponentVersion;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_ComponentVersion(::UnityEngine::Rendering::Universal::__Light2D__ComponentVersions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ComponentVersion = value;
}
constexpr ::UnityEngine::Rendering::Universal::__Light2D__LightType& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_LightType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightType;
}
constexpr ::UnityEngine::Rendering::Universal::__Light2D__LightType const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_LightType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightType;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_LightType(::UnityEngine::Rendering::Universal::__Light2D__LightType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LightType = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_BlendStyleIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlendStyleIndex;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_BlendStyleIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlendStyleIndex;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_BlendStyleIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlendStyleIndex = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_FalloffIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FalloffIntensity;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_FalloffIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FalloffIntensity;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_FalloffIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FalloffIntensity = value;
}
constexpr ::UnityEngine::Color& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_Color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Color;
}
constexpr ::UnityEngine::Color const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_Color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Color;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_Color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Color = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_Intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Intensity;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_Intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Intensity;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_Intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Intensity = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_LightVolumeIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightVolumeIntensity;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_LightVolumeIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightVolumeIntensity;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_LightVolumeIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LightVolumeIntensity = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_LightVolumeIntensityEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightVolumeIntensityEnabled;
}
constexpr bool const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_LightVolumeIntensityEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightVolumeIntensityEnabled;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_LightVolumeIntensityEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LightVolumeIntensityEnabled = value;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_ApplyToSortingLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ApplyToSortingLayers;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_ApplyToSortingLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ApplyToSortingLayers;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_ApplyToSortingLayers(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ApplyToSortingLayers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Sprite>& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_LightCookieSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightCookieSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_LightCookieSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightCookieSprite;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_LightCookieSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LightCookieSprite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Sprite>& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_DeprecatedPointLightCookieSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeprecatedPointLightCookieSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_DeprecatedPointLightCookieSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeprecatedPointLightCookieSprite;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_DeprecatedPointLightCookieSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DeprecatedPointLightCookieSprite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_LightOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightOrder;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_LightOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightOrder;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_LightOrder(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LightOrder = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_AlphaBlendOnOverlap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AlphaBlendOnOverlap;
}
constexpr bool const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_AlphaBlendOnOverlap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AlphaBlendOnOverlap;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_AlphaBlendOnOverlap(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AlphaBlendOnOverlap = value;
}
constexpr ::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_OverlapOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OverlapOperation;
}
constexpr ::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_OverlapOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OverlapOperation;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_OverlapOperation(::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OverlapOperation = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_NormalMapDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NormalMapDistance;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_NormalMapDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NormalMapDistance;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_NormalMapDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NormalMapDistance = value;
}
constexpr ::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_NormalMapQuality() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NormalMapQuality;
}
constexpr ::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_NormalMapQuality() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NormalMapQuality;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_NormalMapQuality(::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NormalMapQuality = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_UseNormalMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseNormalMap;
}
constexpr bool const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_UseNormalMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseNormalMap;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_UseNormalMap(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseNormalMap = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_ShadowIntensityEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowIntensityEnabled;
}
constexpr bool const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_ShadowIntensityEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowIntensityEnabled;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_ShadowIntensityEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShadowIntensityEnabled = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_ShadowIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowIntensity;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_ShadowIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowIntensity;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_ShadowIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShadowIntensity = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_ShadowVolumeIntensityEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowVolumeIntensityEnabled;
}
constexpr bool const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_ShadowVolumeIntensityEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowVolumeIntensityEnabled;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_ShadowVolumeIntensityEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShadowVolumeIntensityEnabled = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_ShadowVolumeIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowVolumeIntensity;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_ShadowVolumeIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowVolumeIntensity;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_ShadowVolumeIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShadowVolumeIntensity = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_Mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_Mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mesh;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_Mesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Mesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex, ::Array<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex>*>&
UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_Vertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Vertices;
}
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex, ::Array<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex>*> const&
UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_Vertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Vertices;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_Vertices(
    ::ArrayW<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex, ::Array<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Vertices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint16_t, ::Array<uint16_t>*>& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_Triangles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Triangles;
}
constexpr ::ArrayW<uint16_t, ::Array<uint16_t>*> const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_Triangles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Triangles;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_Triangles(::ArrayW<uint16_t, ::Array<uint16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Triangles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_PreviousLightCookieSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousLightCookieSprite;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_PreviousLightCookieSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousLightCookieSprite;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_PreviousLightCookieSprite(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousLightCookieSprite = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_CachedPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedPosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_CachedPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedPosition;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_CachedPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedPosition = value;
}
constexpr ::UnityEngine::Bounds& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_LocalBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalBounds;
}
constexpr ::UnityEngine::Bounds const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_LocalBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalBounds;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_LocalBounds(::UnityEngine::Bounds value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LocalBounds = value;
}
constexpr ::UnityEngine::BoundingSphere& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get__boundingSphere_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundingSphere_k__BackingField;
}
constexpr ::UnityEngine::BoundingSphere const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get__boundingSphere_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundingSphere_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set__boundingSphere_k__BackingField(::UnityEngine::BoundingSphere value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____boundingSphere_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_forceUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceUpdate;
}
constexpr bool const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_forceUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceUpdate;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_forceUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forceUpdate = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_PointLightInnerAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointLightInnerAngle;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_PointLightInnerAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointLightInnerAngle;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_PointLightInnerAngle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PointLightInnerAngle = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_PointLightOuterAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointLightOuterAngle;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_PointLightOuterAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointLightOuterAngle;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_PointLightOuterAngle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PointLightOuterAngle = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_PointLightInnerRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointLightInnerRadius;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_PointLightInnerRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointLightInnerRadius;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_PointLightInnerRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PointLightInnerRadius = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_PointLightOuterRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointLightOuterRadius;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_PointLightOuterRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointLightOuterRadius;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_PointLightOuterRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PointLightOuterRadius = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_ShapeLightParametricSides() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShapeLightParametricSides;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_ShapeLightParametricSides() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShapeLightParametricSides;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_ShapeLightParametricSides(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShapeLightParametricSides = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_ShapeLightParametricAngleOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShapeLightParametricAngleOffset;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_ShapeLightParametricAngleOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShapeLightParametricAngleOffset;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_ShapeLightParametricAngleOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShapeLightParametricAngleOffset = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_ShapeLightParametricRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShapeLightParametricRadius;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_ShapeLightParametricRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShapeLightParametricRadius;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_ShapeLightParametricRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShapeLightParametricRadius = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_ShapeLightFalloffSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShapeLightFalloffSize;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_ShapeLightFalloffSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShapeLightFalloffSize;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_ShapeLightFalloffSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShapeLightFalloffSize = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_ShapeLightFalloffOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShapeLightFalloffOffset;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_ShapeLightFalloffOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShapeLightFalloffOffset;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_ShapeLightFalloffOffset(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShapeLightFalloffOffset = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_ShapePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShapePath;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_ShapePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShapePath;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_ShapePath(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ShapePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_PreviousShapeLightFalloffSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousShapeLightFalloffSize;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_PreviousShapeLightFalloffSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousShapeLightFalloffSize;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_PreviousShapeLightFalloffSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousShapeLightFalloffSize = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_PreviousShapeLightParametricSides() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousShapeLightParametricSides;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_PreviousShapeLightParametricSides() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousShapeLightParametricSides;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_PreviousShapeLightParametricSides(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousShapeLightParametricSides = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_PreviousShapeLightParametricAngleOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousShapeLightParametricAngleOffset;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_PreviousShapeLightParametricAngleOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousShapeLightParametricAngleOffset;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_PreviousShapeLightParametricAngleOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousShapeLightParametricAngleOffset = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_PreviousShapeLightParametricRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousShapeLightParametricRadius;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_PreviousShapeLightParametricRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousShapeLightParametricRadius;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_PreviousShapeLightParametricRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousShapeLightParametricRadius = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_PreviousShapePathHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousShapePathHash;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_PreviousShapePathHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousShapePathHash;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_PreviousShapePathHash(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousShapePathHash = value;
}
constexpr ::UnityEngine::Rendering::Universal::__Light2D__LightType& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_PreviousLightType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousLightType;
}
constexpr ::UnityEngine::Rendering::Universal::__Light2D__LightType const& UnityEngine::Rendering::Universal::Light2D::__cordl_internal_get_m_PreviousLightType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousLightType;
}
constexpr void UnityEngine::Rendering::Universal::Light2D::__cordl_internal_set_m_PreviousLightType(::UnityEngine::Rendering::Universal::__Light2D__LightType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousLightType = value;
}
inline ::ArrayW<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex, ::Array<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex>*>
UnityEngine::Rendering::Universal::Light2D::get_vertices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_vertices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex, ::Array<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::set_vertices(
    ::ArrayW<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex, ::Array<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_vertices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::ArrayW<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex, ::Array<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<uint16_t, ::Array<uint16_t>*> UnityEngine::Rendering::Universal::Light2D::get_indices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_indices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint16_t, ::Array<uint16_t>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::set_indices(::ArrayW<uint16_t, ::Array<uint16_t>*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_indices", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t, ::Array<uint16_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::Rendering::Universal::Light2D::get_affectedSortingLayers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_affectedSortingLayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Light2D::get_lightCookieSpriteInstanceID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_lightCookieSpriteInstanceID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::BoundingSphere UnityEngine::Rendering::Universal::Light2D::get_boundingSphere() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_boundingSphere", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::BoundingSphere, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::set_boundingSphere(::UnityEngine::BoundingSphere value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_boundingSphere", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::BoundingSphere>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::Universal::Light2D::get_lightMesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_lightMesh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Light2D::get_hasCachedMesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_hasCachedMesh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::__Light2D__LightType UnityEngine::Rendering::Universal::Light2D::get_lightType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_lightType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::__Light2D__LightType, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::set_lightType(::UnityEngine::Rendering::Universal::__Light2D__LightType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_lightType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__Light2D__LightType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::Light2D::get_blendStyleIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_blendStyleIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::set_blendStyleIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_blendStyleIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::Light2D::get_shadowIntensity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_shadowIntensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::set_shadowIntensity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_shadowIntensity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Light2D::get_shadowsEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_shadowsEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::set_shadowsEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_shadowsEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::Light2D::get_shadowVolumeIntensity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_shadowVolumeIntensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::set_shadowVolumeIntensity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_shadowVolumeIntensity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Light2D::get_volumetricShadowsEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_volumetricShadowsEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::set_volumetricShadowsEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_volumetricShadowsEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Color UnityEngine::Rendering::Universal::Light2D::get_color() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "get_color",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::set_color(::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_color", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::Light2D::get_intensity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_intensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::set_intensity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_intensity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::Light2D::get_volumeOpacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_volumeOpacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::Light2D::get_volumeIntensity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_volumeIntensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Light2D::get_volumeIntensityEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_volumeIntensityEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::set_volumeIntensityEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_volumeIntensityEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::Rendering::Universal::Light2D::get_lightCookieSprite() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_lightCookieSprite", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::set_lightCookieSprite(::UnityEngine::Sprite* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_lightCookieSprite", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::Light2D::get_falloffIntensity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_falloffIntensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::set_falloffIntensity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_falloffIntensity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Light2D::get_alphaBlendOnOverlap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_alphaBlendOnOverlap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation UnityEngine::Rendering::Universal::Light2D::get_overlapOperation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_overlapOperation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::set_overlapOperation(::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_overlapOperation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::Light2D::get_lightOrder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_lightOrder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::set_lightOrder(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_lightOrder",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::Light2D::get_normalMapDistance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_normalMapDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality UnityEngine::Rendering::Universal::Light2D::get_normalMapQuality() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_normalMapQuality", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Light2D::get_renderVolumetricShadows() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_renderVolumetricShadows", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::MarkForUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "MarkForUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::CacheValues() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "CacheValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Light2D::GetTopMostLitLayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "GetTopMostLitLayer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Bounds UnityEngine::Rendering::Universal::Light2D::UpdateSpriteMesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "UpdateSpriteMesh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(this, ___internal_method);
}
/// @param forceUpdate: bool (default: false)
inline void UnityEngine::Rendering::Universal::Light2D::UpdateMesh(bool forceUpdate) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "UpdateMesh",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, forceUpdate);
}
inline void UnityEngine::Rendering::Universal::Light2D::UpdateBoundingSphere() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "UpdateBoundingSphere", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Light2D::IsLitLayer(int32_t layer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "IsLitLayer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, layer);
}
inline void UnityEngine::Rendering::Universal::Light2D::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::OnBeforeSerialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "OnBeforeSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::OnAfterDeserialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "OnAfterDeserialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::Light2D::get_pointLightInnerAngle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_pointLightInnerAngle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::set_pointLightInnerAngle(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_pointLightInnerAngle",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::Light2D::get_pointLightOuterAngle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_pointLightOuterAngle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::set_pointLightOuterAngle(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_pointLightOuterAngle",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::Light2D::get_pointLightInnerRadius() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_pointLightInnerRadius", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::set_pointLightInnerRadius(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_pointLightInnerRadius",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::Light2D::get_pointLightOuterRadius() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_pointLightOuterRadius", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::set_pointLightOuterRadius(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_pointLightOuterRadius",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::Light2D::get_pointLightDistance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_pointLightDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality UnityEngine::Rendering::Universal::Light2D::get_pointLightQuality() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_pointLightQuality", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Light2D::get_isPointLight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_isPointLight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Light2D::get_shapeLightParametricSides() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_shapeLightParametricSides", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::Light2D::get_shapeLightParametricAngleOffset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "get_shapeLightParametricAngleOffset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::Light2D::get_shapeLightParametricRadius() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_shapeLightParametricRadius", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::set_shapeLightParametricRadius(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_shapeLightParametricRadius",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::Light2D::get_shapeLightFalloffSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_shapeLightFalloffSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::set_shapeLightFalloffSize(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_shapeLightFalloffSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> UnityEngine::Rendering::Universal::Light2D::get_shapePath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                                                             "get_shapePath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2D::set_shapePath(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "set_shapePath", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::Light2D::SetShapePath(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> path) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), "SetShapePath", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path);
}
inline ::UnityEngine::Rendering::Universal::Light2D* UnityEngine::Rendering::Universal::Light2D::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Light2D*>());
}
inline void UnityEngine::Rendering::Universal::Light2D::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2D*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Light2D::Light2D() {}
constexpr ::UnityEngine::Rendering::Universal::__Light2D__ComponentVersions UnityEngine::Rendering::Universal::Light2D::k_CurrentComponentVersion{ static_cast<int32_t>(0x1) };
