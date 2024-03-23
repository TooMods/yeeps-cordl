#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LensFlareCommonSRP_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__LensFlareCommonSRP_def.hpp"
#include "UnityEngine/Rendering/zzzz__LensFlareComponentSRP_def.hpp"
#include "UnityEngine/Rendering/zzzz__LensFlareDataElementSRP_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "element", ty: "::UnityEngine::Rendering::LensFlareDataElementSRP*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_0::__LensFlareCommonSRP____c__DisplayClass32_0(::UnityEngine::Rendering::LensFlareDataElementSRP* element) noexcept {
  this->element = element;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_0::__LensFlareCommonSRP____c__DisplayClass32_0() {}
// Ctor Parameters [CppParam { name: "screenPos", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "float_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "globalCos0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "globalSin0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "combinedScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "usedAspectRatio", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_1::__LensFlareCommonSRP____c__DisplayClass32_1(::UnityEngine::Vector2 screenPos, float_t position, float_t globalCos0,
                                                                                                                             float_t globalSin0, float_t combinedScale,
                                                                                                                             float_t usedAspectRatio) noexcept {
  this->screenPos = screenPos;
  this->position = position;
  this->globalCos0 = globalCos0;
  this->globalSin0 = globalSin0;
  this->combinedScale = combinedScale;
  this->usedAspectRatio = usedAspectRatio;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_1::__LensFlareCommonSRP____c__DisplayClass32_1() {}
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::LensFlareCommonSRP::*)()>(&::UnityEngine::Rendering::LensFlareCommonSRP::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x19feb08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Rendering::LensFlareCommonSRP::Initialize)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x19feb10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
                                                                               "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Rendering::LensFlareCommonSRP::Dispose)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x19feddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::LensFlareCommonSRP* (*)()>(&::UnityEngine::Rendering::LensFlareCommonSRP::get_Instance)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x19fef00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
                                                                               "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.get_Data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP>>* (
    ::UnityEngine::Rendering::LensFlareCommonSRP::*)()>(&::UnityEngine::Rendering::LensFlareCommonSRP::get_Data)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x19ff090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "get_Data",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.GetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP>>* (
    ::UnityEngine::Rendering::LensFlareCommonSRP::*)()>(&::UnityEngine::Rendering::LensFlareCommonSRP::GetData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x19ff0e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "GetData",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.IsEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::LensFlareCommonSRP::*)()>(&::UnityEngine::Rendering::LensFlareCommonSRP::IsEmpty)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x19ff138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "IsEmpty",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.AddData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::LensFlareCommonSRP::*)(::UnityEngine::Rendering::LensFlareComponentSRP*)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::AddData)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x19ff1bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "AddData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareComponentSRP*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.ShapeAttenuationPointLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationPointLight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x19ff2d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
                                                                               "ShapeAttenuationPointLight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.ShapeAttenuationDirLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationDirLight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x19ff2d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationDirLight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.ShapeAttenuationSpotConeLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationSpotConeLight)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x19ff2f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationSpotConeLight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.ShapeAttenuationSpotBoxLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationSpotBoxLight)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x19ff3a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationSpotBoxLight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.ShapeAttenuationSpotPyramidLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationSpotPyramidLight)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x19ff3cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationSpotPyramidLight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.ShapeAttenuationAreaTubeLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationAreaTubeLight)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x19ff46c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationAreaTubeLight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.ShapeAttenuationAreaRectangleLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationAreaRectangleLight)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x19ff988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationAreaRectangleLight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.ShapeAttenuationAreaDiscLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationAreaDiscLight)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x19ffa20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationAreaDiscLight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.GetFlareData0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, float_t, float_t, ::UnityEngine::Vector2, bool)>(
        &::UnityEngine::Rendering::LensFlareCommonSRP::GetFlareData0)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x19ffab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "GetFlareData0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.GetLensFlareRayOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, float_t, float_t, float_t)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::GetLensFlareRayOffset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x19ffcc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "GetLensFlareRayOffset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.WorldToViewport
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Camera*, bool, bool, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::WorldToViewport)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x19ffcfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "WorldToViewport", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.WorldToViewportLocal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(bool, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::WorldToViewportLocal)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x19ffe30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "WorldToViewportLocal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.WorldToViewportDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Camera*, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::WorldToViewportDistance)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x19ffeac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "WorldToViewportDistance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.ComputeOcclusion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Rendering::LensFlareCommonSRP*, ::UnityEngine::Camera*, float_t, float_t, bool, float_t, float_t, bool, ::UnityEngine::Vector3,
                         ::UnityEngine::Matrix4x4, ::UnityEngine::Rendering::CommandBuffer*, bool, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(
        &::UnityEngine::Rendering::LensFlareCommonSRP::ComputeOcclusion)> {
  constexpr static std::size_t size = 0xed8;
  constexpr static std::size_t addrs = 0x19fff9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ComputeOcclusion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 22>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.DoLensFlareDataDrivenCommon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Rendering::LensFlareCommonSRP*, ::UnityEngine::Camera*, float_t, float_t, bool, float_t, float_t, bool, ::UnityEngine::Vector3,
                         ::UnityEngine::Matrix4x4, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier,
                         ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t,
                         int32_t, int32_t, int32_t, bool)>(&::UnityEngine::Rendering::LensFlareCommonSRP::DoLensFlareDataDrivenCommon)> {
  constexpr static std::size_t size = 0x2404;
  constexpr static std::size_t addrs = 0x1a0109c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "DoLensFlareDataDrivenCommon", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 24>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.RemoveData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::LensFlareCommonSRP::*)(::UnityEngine::Rendering::LensFlareComponentSRP*)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::RemoveData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1a03670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "RemoveData", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareComponentSRP*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.DoPaniniProjection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, float_t, float_t, float_t, float_t, float_t)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::DoPaniniProjection)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1a00e74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "DoPaniniProjection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.CalcViewExtents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(float_t, float_t, float_t)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::CalcViewExtents)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1a03740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "CalcViewExtents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.CalcCropExtents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(float_t, float_t, float_t, float_t)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::CalcCropExtents)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1a03780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "CalcCropExtents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.Panini_Generic_Inv
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, float_t)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::Panini_Generic_Inv)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1a03844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
                                                                               "Panini_Generic_Inv", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP._ShapeAttenuationAreaTubeLight_g__Fpo_23_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::_ShapeAttenuationAreaTubeLight_g__Fpo_23_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1a03964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "<ShapeAttenuationAreaTubeLight>g__Fpo|23_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP._ShapeAttenuationAreaTubeLight_g__Fwt_23_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::_ShapeAttenuationAreaTubeLight_g__Fwt_23_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1a039a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "<ShapeAttenuationAreaTubeLight>g__Fwt|23_1",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP._ShapeAttenuationAreaTubeLight_g__DiffLineIntegral_23_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::_ShapeAttenuationAreaTubeLight_g__DiffLineIntegral_23_2)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x19ff6a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
                                                 "<ShapeAttenuationAreaTubeLight>g__DiffLineIntegral|23_2", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP._DoLensFlareDataDrivenCommon_g__ComputeLocalSize_32_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(
    ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::AnimationCurve*, ByRef<::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_0>,
    ByRef<::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_1>)>(&::UnityEngine::Rendering::LensFlareCommonSRP::_DoLensFlareDataDrivenCommon_g__ComputeLocalSize_32_0)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x1a034cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "<DoLensFlareDataDrivenCommon>g__ComputeLocalSize|32_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_0>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_1>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP._DoLensFlareDataDrivenCommon_g__RandomRange_32_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::_DoLensFlareDataDrivenCommon_g__RandomRange_32_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1a03668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "<DoLensFlareDataDrivenCommon>g__RandomRange|32_1",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF_m_Instance(::UnityEngine::Rendering::LensFlareCommonSRP* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::LensFlareCommonSRP*, "m_Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<::UnityEngine::Rendering::LensFlareCommonSRP*>(value));
}
inline ::UnityEngine::Rendering::LensFlareCommonSRP* UnityEngine::Rendering::LensFlareCommonSRP::getStaticF_m_Instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::LensFlareCommonSRP*, "m_Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF_m_Padlock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "m_Padlock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* UnityEngine::Rendering::LensFlareCommonSRP::getStaticF_m_Padlock() {
  return ::cordl_internals::getStaticField<::System::Object*, "m_Padlock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF_m_Data(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP>>*, "m_Data",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP>>* UnityEngine::Rendering::LensFlareCommonSRP::getStaticF_m_Data() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP>>*, "m_Data",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF_maxLensFlareWithOcclusion(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "maxLensFlareWithOcclusion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF_maxLensFlareWithOcclusion() {
  return ::cordl_internals::getStaticField<int32_t, "maxLensFlareWithOcclusion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF_maxLensFlareWithOcclusionTemporalSample(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "maxLensFlareWithOcclusionTemporalSample", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF_maxLensFlareWithOcclusionTemporalSample() {
  return ::cordl_internals::getStaticField<int32_t, "maxLensFlareWithOcclusionTemporalSample",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF_mergeNeeded(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "mergeNeeded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF_mergeNeeded() {
  return ::cordl_internals::getStaticField<int32_t, "mergeNeeded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF_occlusionRT(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "occlusionRT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::LensFlareCommonSRP::getStaticF_occlusionRT() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "occlusionRT",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF_frameIdx(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "frameIdx", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF_frameIdx() {
  return ::cordl_internals::getStaticField<int32_t, "frameIdx", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline ::UnityEngine::Rendering::LensFlareCommonSRP* UnityEngine::Rendering::LensFlareCommonSRP::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::LensFlareCommonSRP*>());
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::LensFlareCommonSRP* UnityEngine::Rendering::LensFlareCommonSRP::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
                                                                             "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::LensFlareCommonSRP*, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP>>* UnityEngine::Rendering::LensFlareCommonSRP::get_Data() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "get_Data",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP>>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP>>* UnityEngine::Rendering::LensFlareCommonSRP::GetData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "GetData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP>>*, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::LensFlareCommonSRP::IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "IsEmpty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::AddData(::UnityEngine::Rendering::LensFlareComponentSRP* newData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "AddData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareComponentSRP*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newData);
}
inline float_t UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationPointLight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
                                                                             "ShapeAttenuationPointLight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline float_t UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationDirLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationDirLight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, forward, wo);
}
inline float_t UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationSpotConeLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo, float_t spotAngle, float_t innerSpotPercent01) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationSpotConeLight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, forward, wo, spotAngle, innerSpotPercent01);
}
inline float_t UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationSpotBoxLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationSpotBoxLight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, forward, wo);
}
inline float_t UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationSpotPyramidLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationSpotPyramidLight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, forward, wo);
}
inline float_t UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationAreaTubeLight(::UnityEngine::Vector3 lightPositionWS, ::UnityEngine::Vector3 lightSide, float_t lightWidth,
                                                                                         ::UnityEngine::Camera* cam) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationAreaTubeLight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, lightPositionWS, lightSide, lightWidth, cam);
}
inline float_t UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationAreaRectangleLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationAreaRectangleLight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, forward, wo);
}
inline float_t UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationAreaDiscLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationAreaDiscLight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, forward, wo);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::LensFlareCommonSRP::GetFlareData0(::UnityEngine::Vector2 screenPos, ::UnityEngine::Vector2 translationScale, ::UnityEngine::Vector2 rayOff0,
                                                                                        ::UnityEngine::Vector2 vLocalScreenRatio, float_t angleDeg, float_t position, float_t angularOffset,
                                                                                        ::UnityEngine::Vector2 positionOffset, bool autoRotate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "GetFlareData0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(nullptr, ___internal_method, screenPos, translationScale, rayOff0, vLocalScreenRatio, angleDeg, position, angularOffset,
                                                                            positionOffset, autoRotate);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::LensFlareCommonSRP::GetLensFlareRayOffset(::UnityEngine::Vector2 screenPos, float_t position, float_t globalCos0, float_t globalSin0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "GetLensFlareRayOffset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, screenPos, position, globalCos0, globalSin0);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::LensFlareCommonSRP::WorldToViewport(::UnityEngine::Camera* camera, bool isLocalLight, bool isCameraRelative,
                                                                                          ::UnityEngine::Matrix4x4 viewProjMatrix, ::UnityEngine::Vector3 positionWS) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "WorldToViewport", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, camera, isLocalLight, isCameraRelative, viewProjMatrix, positionWS);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::LensFlareCommonSRP::WorldToViewportLocal(bool isCameraRelative, ::UnityEngine::Matrix4x4 viewProjMatrix, ::UnityEngine::Vector3 cameraPosWS,
                                                                                               ::UnityEngine::Vector3 positionWS) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "WorldToViewportLocal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, isCameraRelative, viewProjMatrix, cameraPosWS, positionWS);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::LensFlareCommonSRP::WorldToViewportDistance(::UnityEngine::Camera* cam, ::UnityEngine::Vector3 positionWS) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "WorldToViewportDistance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, cam, positionWS);
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::ComputeOcclusion(::UnityEngine::Material* lensFlareShader, ::UnityEngine::Rendering::LensFlareCommonSRP* lensFlares, ::UnityEngine::Camera* cam,
                                                                         float_t actualWidth, float_t actualHeight, bool usePanini, float_t paniniDistance, float_t paniniCropToFit,
                                                                         bool isCameraRelative, ::UnityEngine::Vector3 cameraPositionWS, ::UnityEngine::Matrix4x4 viewProjMatrix,
                                                                         ::UnityEngine::Rendering::CommandBuffer* cmd, bool taaEnabled, int32_t _FlareOcclusionTex, int32_t _FlareOcclusionIndex,
                                                                         int32_t _FlareTex, int32_t _FlareColorValue, int32_t _FlareData0, int32_t _FlareData1, int32_t _FlareData2,
                                                                         int32_t _FlareData3, int32_t _FlareData4) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ComputeOcclusion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 22>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lensFlareShader, lensFlares, cam, actualWidth, actualHeight, usePanini, paniniDistance, paniniCropToFit,
                                                          isCameraRelative, cameraPositionWS, viewProjMatrix, cmd, taaEnabled, _FlareOcclusionTex, _FlareOcclusionIndex, _FlareTex, _FlareColorValue,
                                                          _FlareData0, _FlareData1, _FlareData2, _FlareData3, _FlareData4);
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::DoLensFlareDataDrivenCommon(
    ::UnityEngine::Material* lensFlareShader, ::UnityEngine::Rendering::LensFlareCommonSRP* lensFlares, ::UnityEngine::Camera* cam, float_t actualWidth, float_t actualHeight, bool usePanini,
    float_t paniniDistance, float_t paniniCropToFit, bool isCameraRelative, ::UnityEngine::Vector3 cameraPositionWS, ::UnityEngine::Matrix4x4 viewProjMatrix,
    ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
    ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* GetLensFlareLightAttenuation, int32_t _FlareOcclusionTex,
    int32_t _FlareOcclusionIndex, int32_t _FlareTex, int32_t _FlareColorValue, int32_t _FlareData0, int32_t _FlareData1, int32_t _FlareData2, int32_t _FlareData3, int32_t _FlareData4,
    bool debugView) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "DoLensFlareDataDrivenCommon", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 24>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lensFlareShader, lensFlares, cam, actualWidth, actualHeight, usePanini, paniniDistance, paniniCropToFit,
                                                          isCameraRelative, cameraPositionWS, viewProjMatrix, cmd, colorBuffer, GetLensFlareLightAttenuation, _FlareOcclusionTex, _FlareOcclusionIndex,
                                                          _FlareTex, _FlareColorValue, _FlareData0, _FlareData1, _FlareData2, _FlareData3, _FlareData4, debugView);
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::RemoveData(::UnityEngine::Rendering::LensFlareComponentSRP* data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "RemoveData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareComponentSRP*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::LensFlareCommonSRP::DoPaniniProjection(::UnityEngine::Vector2 screenPos, float_t actualWidth, float_t actualHeight, float_t fieldOfView,
                                                                                             float_t paniniProjectionCropToFit, float_t paniniProjectionDistance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "DoPaniniProjection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, screenPos, actualWidth, actualHeight, fieldOfView, paniniProjectionCropToFit,
                                                                            paniniProjectionDistance);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::LensFlareCommonSRP::CalcViewExtents(float_t actualWidth, float_t actualHeight, float_t fieldOfView) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "CalcViewExtents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, actualWidth, actualHeight, fieldOfView);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::LensFlareCommonSRP::CalcCropExtents(float_t actualWidth, float_t actualHeight, float_t fieldOfView, float_t d) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "CalcCropExtents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, actualWidth, actualHeight, fieldOfView, d);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::LensFlareCommonSRP::Panini_Generic_Inv(::UnityEngine::Vector2 projPos, float_t d) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
                                                                             "Panini_Generic_Inv", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, projPos, d);
}
inline float_t UnityEngine::Rendering::LensFlareCommonSRP::_ShapeAttenuationAreaTubeLight_g__Fpo_23_0(float_t d, float_t l) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "<ShapeAttenuationAreaTubeLight>g__Fpo|23_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, d, l);
}
inline float_t UnityEngine::Rendering::LensFlareCommonSRP::_ShapeAttenuationAreaTubeLight_g__Fwt_23_1(float_t d, float_t l) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "<ShapeAttenuationAreaTubeLight>g__Fwt|23_1",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, d, l);
}
inline float_t UnityEngine::Rendering::LensFlareCommonSRP::_ShapeAttenuationAreaTubeLight_g__DiffLineIntegral_23_2(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
                                               "<ShapeAttenuationAreaTubeLight>g__DiffLineIntegral|23_2", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, p1, p2);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::LensFlareCommonSRP::_DoLensFlareDataDrivenCommon_g__ComputeLocalSize_32_0(
    ::UnityEngine::Vector2 rayOff, ::UnityEngine::Vector2 rayOff0, ::UnityEngine::Vector2 curSize, ::UnityEngine::AnimationCurve* distortionCurve,
    ByRef<::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_0> _cordl_fixed_empty_name_whitespace,
    ByRef<::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_1> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "<DoLensFlareDataDrivenCommon>g__ComputeLocalSize|32_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_0>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::__LensFlareCommonSRP____c__DisplayClass32_1>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, rayOff, rayOff0, curSize, distortionCurve, _cordl_fixed_empty_name_whitespace,
                                                                            _cordl_fixed_empty_name_whitespace);
}
inline float_t UnityEngine::Rendering::LensFlareCommonSRP::_DoLensFlareDataDrivenCommon_g__RandomRange_32_1(float_t min, float_t max) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "<DoLensFlareDataDrivenCommon>g__RandomRange|32_1",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, min, max);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LensFlareCommonSRP::LensFlareCommonSRP() {}
