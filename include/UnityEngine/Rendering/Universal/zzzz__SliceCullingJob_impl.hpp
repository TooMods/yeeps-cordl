#pragma once
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/zzzz__LightType_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__SliceCullingJob_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobFor_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__SliceCullingJob_def.hpp"
#include "UnityEngine/zzzz__LightType_def.hpp"
// Ctor Parameters [CppParam { name: "tip", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "direction", ty: "::Unity::Mathematics::float3", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "height", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__SliceCullingJob__Cone::__SliceCullingJob__Cone(::Unity::Mathematics::float3 tip, ::Unity::Mathematics::float3 direction, float_t height,
                                                                                                float_t radius) noexcept {
  this->tip = tip;
  this->direction = direction;
  this->height = height;
  this->radius = radius;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__SliceCullingJob__Cone::__SliceCullingJob__Cone() {}
// Ctor Parameters [CppParam { name: "center", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__SliceCullingJob__Sphere::__SliceCullingJob__Sphere(::Unity::Mathematics::float3 center, float_t radius) noexcept {
  this->center = center;
  this->radius = radius;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__SliceCullingJob__Sphere::__SliceCullingJob__Sphere() {}
// Ctor Parameters [CppParam { name: "normal", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "distanceToOrigin", ty: "float_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane::__SliceCullingJob__Plane(::Unity::Mathematics::float3 normal, float_t distanceToOrigin) noexcept {
  this->normal = normal;
  this->distanceToOrigin = distanceToOrigin;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane::__SliceCullingJob__Plane() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SliceCullingJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::SliceCullingJob::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::SliceCullingJob::Execute)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x2732e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SliceCullingJob>::get(), "Execute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SliceCullingJob.ContainsLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::SliceCullingJob::*)(
    ::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane, ::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane, int32_t)>(
    &::UnityEngine::Rendering::Universal::SliceCullingJob::ContainsLight)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x27330c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SliceCullingJob>::get(), "ContainsLight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SliceCullingJob.ComputePlane
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane (*)(
    ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::UnityEngine::Rendering::Universal::SliceCullingJob::ComputePlane)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2733278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SliceCullingJob>::get(), "ComputePlane", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SliceCullingJob.SphereBehindPlane
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Rendering::Universal::__SliceCullingJob__Sphere, ::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane)>(
        &::UnityEngine::Rendering::Universal::SliceCullingJob::SphereBehindPlane)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x273336c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SliceCullingJob>::get(), "SphereBehindPlane", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__SliceCullingJob__Sphere>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SliceCullingJob.PointBehindPlane
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::Mathematics::float3, ::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane)>(
    &::UnityEngine::Rendering::Universal::SliceCullingJob::PointBehindPlane)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2733394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SliceCullingJob>::get(), "PointBehindPlane", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SliceCullingJob.ConeBehindPlane
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Rendering::Universal::__SliceCullingJob__Cone, ::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane)>(
        &::UnityEngine::Rendering::Universal::SliceCullingJob::ConeBehindPlane)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x27333b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SliceCullingJob>::get(), "ConeBehindPlane", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__SliceCullingJob__Cone>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr UnityEngine::Rendering::Universal::SliceCullingJob::operator ::Unity::Jobs::IJobFor*() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* UnityEngine::Rendering::Universal::SliceCullingJob::i___Unity__Jobs__IJobFor() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void UnityEngine::Rendering::Universal::SliceCullingJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SliceCullingJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline bool UnityEngine::Rendering::Universal::SliceCullingJob::ContainsLight(::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane leftPlane,
                                                                              ::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane rightPlane, int32_t lightIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SliceCullingJob>::get(), "ContainsLight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, leftPlane, rightPlane, lightIndex);
}
inline ::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane UnityEngine::Rendering::Universal::SliceCullingJob::ComputePlane(::Unity::Mathematics::float3 p0, ::Unity::Mathematics::float3 p1,
                                                                                                                                      ::Unity::Mathematics::float3 p2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SliceCullingJob>::get(), "ComputePlane", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane, false>(nullptr, ___internal_method, p0, p1, p2);
}
inline bool UnityEngine::Rendering::Universal::SliceCullingJob::SphereBehindPlane(::UnityEngine::Rendering::Universal::__SliceCullingJob__Sphere sphere,
                                                                                  ::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane plane) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SliceCullingJob>::get(), "SphereBehindPlane", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__SliceCullingJob__Sphere>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sphere, plane);
}
inline bool UnityEngine::Rendering::Universal::SliceCullingJob::PointBehindPlane(::Unity::Mathematics::float3 p, ::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane plane) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SliceCullingJob>::get(), "PointBehindPlane", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, p, plane);
}
inline bool UnityEngine::Rendering::Universal::SliceCullingJob::ConeBehindPlane(::UnityEngine::Rendering::Universal::__SliceCullingJob__Cone cone,
                                                                                ::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane plane) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SliceCullingJob>::get(), "ConeBehindPlane", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__SliceCullingJob__Cone>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, cone, plane);
}
// Ctor Parameters [CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewOrigin", ty: "::Unity::Mathematics::float3", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "viewForward", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewRight", ty: "::Unity::Mathematics::float3",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "viewUp", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightTypes", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::LightType>", modifiers: "", def_value: Some("{}") }, CppParam { name: "radiuses", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "directions", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "positions", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}") }, CppParam { name: "coneRadiuses", ty:
// "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightsPerTile", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "sliceLightMasks", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::SliceCullingJob::SliceCullingJob(
    float_t scale, ::Unity::Mathematics::float3 viewOrigin, ::Unity::Mathematics::float3 viewForward, ::Unity::Mathematics::float3 viewRight, ::Unity::Mathematics::float3 viewUp,
    ::Unity::Collections::NativeArray_1<::UnityEngine::LightType> lightTypes, ::Unity::Collections::NativeArray_1<float_t> radiuses,
    ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> directions, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> positions,
    ::Unity::Collections::NativeArray_1<float_t> coneRadiuses, int32_t lightsPerTile, ::Unity::Collections::NativeArray_1<uint32_t> sliceLightMasks) noexcept {
  this->scale = scale;
  this->viewOrigin = viewOrigin;
  this->viewForward = viewForward;
  this->viewRight = viewRight;
  this->viewUp = viewUp;
  this->lightTypes = lightTypes;
  this->radiuses = radiuses;
  this->directions = directions;
  this->positions = positions;
  this->coneRadiuses = coneRadiuses;
  this->lightsPerTile = lightsPerTile;
  this->sliceLightMasks = sliceLightMasks;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::SliceCullingJob::SliceCullingJob() {}
