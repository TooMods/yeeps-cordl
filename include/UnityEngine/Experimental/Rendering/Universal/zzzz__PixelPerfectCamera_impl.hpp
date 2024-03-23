#pragma once
#include "UnityEngine/Experimental/Rendering/Universal/zzzz__PixelPerfectCamera_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Experimental/Rendering/Universal/zzzz__PixelPerfectCamera_def.hpp"
#include "UnityEngine/Experimental/Rendering/Universal/zzzz__PixelPerfectCamera_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IPixelPerfectCamera_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PixelPerfectCameraInternal_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame::__PixelPerfectCamera__CropFrame(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame::__PixelPerfectCamera__CropFrame() {}
constexpr ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame::None{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame::Pillarbox{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame::Letterbox{
  static_cast<int32_t>(0x2)
};
constexpr ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame::Windowbox{
  static_cast<int32_t>(0x3)
};
constexpr ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame::StretchFill{
  static_cast<int32_t>(0x4)
};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping::__PixelPerfectCamera__GridSnapping(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping::__PixelPerfectCamera__GridSnapping() {}
constexpr ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping::None{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping::PixelSnapping{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping
    UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping::UpscaleRenderTexture{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__ComponentVersions::__PixelPerfectCamera__ComponentVersions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__ComponentVersions::__PixelPerfectCamera__ComponentVersions() {}
constexpr ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__ComponentVersions
    UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__ComponentVersions::Version_Unserialized{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__ComponentVersions
    UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__ComponentVersions::Version_1{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.get_cropFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame (
    ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)()>(&::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_cropFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1e1f7cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "get_cropFrame",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.set_cropFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)(
    ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame)>(&::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::set_cropFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1e1f7d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "set_cropFrame",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.get_gridSnapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping (
    ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)()>(&::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_gridSnapping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1e1f7dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                                 "get_gridSnapping", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.set_gridSnapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)(
    ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping)>(&::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::set_gridSnapping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1e1f7e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "set_gridSnapping",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.get_orthographicSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_orthographicSize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1e1f7ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                                 "get_orthographicSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.get_assetsPPU
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_assetsPPU)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1e1f808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "get_assetsPPU",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.set_assetsPPU
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::set_assetsPPU)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1e1f810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "set_assetsPPU",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.get_refResolutionX
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_refResolutionX)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1e1f830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                                 "get_refResolutionX", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.set_refResolutionX
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::set_refResolutionX)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1e1f838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "set_refResolutionX",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.get_refResolutionY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_refResolutionY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1e1f858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                                 "get_refResolutionY", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.set_refResolutionY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::set_refResolutionY)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1e1f860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "set_refResolutionY",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.get_upscaleRT
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_upscaleRT)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1e1f880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "get_upscaleRT",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.set_upscaleRT
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::set_upscaleRT)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1e1f890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "set_upscaleRT",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.get_pixelSnapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_pixelSnapping)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1e1f8b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                                 "get_pixelSnapping", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.set_pixelSnapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::set_pixelSnapping)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1e1f8c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "set_pixelSnapping",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.get_cropFrameX
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_cropFrameX)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1e1f8e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                                 "get_cropFrameX", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.set_cropFrameX
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::set_cropFrameX)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1e1f904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "set_cropFrameX",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.get_cropFrameY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_cropFrameY)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1e1f950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                                 "get_cropFrameY", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.set_cropFrameY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::set_cropFrameY)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1e1f974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "set_cropFrameY",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.get_stretchFill
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_stretchFill)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1e1f9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                                 "get_stretchFill", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.set_stretchFill
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::set_stretchFill)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1e1f9d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "set_stretchFill",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.get_pixelRatio
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_pixelRatio)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1e1f9e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                                 "get_pixelRatio", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.RoundToPixel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)(
    ::UnityEngine::Vector3)>(&::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::RoundToPixel)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x1e1fa30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "RoundToPixel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.CorrectCinemachineOrthoSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)(float_t)>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::CorrectCinemachineOrthoSize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1e1fc28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "CorrectCinemachineOrthoSize",
                                   std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.get_finalBlitFilterMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::FilterMode (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_finalBlitFilterMode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1e1fc48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                                 "get_finalBlitFilterMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.get_offscreenRTSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_offscreenRTSize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1e1fc64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                                 "get_offscreenRTSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.get_cameraRTSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_cameraRTSize)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1e1fc80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                                 "get_cameraRTSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.PixelSnap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::PixelSnap)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1e1fd4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "PixelSnap",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::Awake)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1e1fecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "Awake",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.UpdateCameraProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::UpdateCameraProperties)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1e1ff60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                                 "UpdateCameraProperties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.OnBeginCameraRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::OnBeginCameraRendering)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1e20024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                                 "OnBeginCameraRendering", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.OnEndCameraRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::OnEndCameraRendering)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1e200f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                                 "OnEndCameraRendering", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::OnEnable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1e2017c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "OnEnable",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::OnDisable)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x1e2026c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "OnDisable",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1e203b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                                 "OnBeforeSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera.OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1e203b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                                 "OnAfterDeserialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1e203b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Rendering::Universal::IPixelPerfectCamera"
constexpr UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::operator ::UnityEngine::Rendering::Universal::IPixelPerfectCamera*() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::IPixelPerfectCamera*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::Universal::IPixelPerfectCamera"
constexpr ::UnityEngine::Rendering::Universal::IPixelPerfectCamera*
UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::i___UnityEngine__Rendering__Universal__IPixelPerfectCamera() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::IPixelPerfectCamera*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
constexpr int32_t& UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_AssetsPPU() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetsPPU;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_AssetsPPU() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetsPPU;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::__cordl_internal_set_m_AssetsPPU(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AssetsPPU = value;
}
constexpr int32_t& UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_RefResolutionX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RefResolutionX;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_RefResolutionX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RefResolutionX;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::__cordl_internal_set_m_RefResolutionX(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RefResolutionX = value;
}
constexpr int32_t& UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_RefResolutionY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RefResolutionY;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_RefResolutionY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RefResolutionY;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::__cordl_internal_set_m_RefResolutionY(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RefResolutionY = value;
}
constexpr ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame& UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_CropFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CropFrame;
}
constexpr ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame const&
UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_CropFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CropFrame;
}
constexpr void
UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::__cordl_internal_set_m_CropFrame(::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CropFrame = value;
}
constexpr ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping&
UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_GridSnapping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GridSnapping;
}
constexpr ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping const&
UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_GridSnapping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GridSnapping;
}
constexpr void
UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::__cordl_internal_set_m_GridSnapping(::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GridSnapping = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_Camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_Camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Camera;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::__cordl_internal_set_m_Camera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Camera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal*& UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_Internal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Internal;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal*> const&
UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_Internal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Internal;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::__cordl_internal_set_m_Internal(::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Internal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_CinemachineCompatibilityMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CinemachineCompatibilityMode;
}
constexpr bool const& UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_CinemachineCompatibilityMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CinemachineCompatibilityMode;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::__cordl_internal_set_m_CinemachineCompatibilityMode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CinemachineCompatibilityMode = value;
}
inline ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_cropFrame() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "get_cropFrame",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::set_cropFrame(::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "set_cropFrame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_gridSnapping() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                               "get_gridSnapping", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::set_gridSnapping(::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "set_gridSnapping",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_orthographicSize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                               "get_orthographicSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_assetsPPU() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "get_assetsPPU",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::set_assetsPPU(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "set_assetsPPU",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_refResolutionX() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                               "get_refResolutionX", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::set_refResolutionX(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "set_refResolutionX",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_refResolutionY() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                               "get_refResolutionY", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::set_refResolutionY(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "set_refResolutionY",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_upscaleRT() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "get_upscaleRT",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::set_upscaleRT(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "set_upscaleRT",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_pixelSnapping() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                               "get_pixelSnapping", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::set_pixelSnapping(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "set_pixelSnapping",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_cropFrameX() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "get_cropFrameX",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::set_cropFrameX(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "set_cropFrameX",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_cropFrameY() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "get_cropFrameY",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::set_cropFrameY(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "set_cropFrameY",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_stretchFill() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "get_stretchFill",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::set_stretchFill(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "set_stretchFill",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_pixelRatio() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "get_pixelRatio",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::RoundToPixel(::UnityEngine::Vector3 position) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "RoundToPixel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, position);
}
inline float_t UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::CorrectCinemachineOrthoSize(float_t targetOrthoSize) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "CorrectCinemachineOrthoSize",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, targetOrthoSize);
}
inline ::UnityEngine::FilterMode UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_finalBlitFilterMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                               "get_finalBlitFilterMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::FilterMode, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2Int UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_offscreenRTSize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                               "get_offscreenRTSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2Int UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::get_cameraRTSize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                               "get_cameraRTSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::PixelSnap() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "PixelSnap",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::Awake() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "Awake",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::UpdateCameraProperties() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                               "UpdateCameraProperties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                               "OnBeginCameraRendering", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, camera);
}
inline void UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::OnEndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                               "OnEndCameraRendering", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, camera);
}
inline void UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::OnEnable() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "OnEnable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::OnDisable() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), "OnDisable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                               "OnBeforeSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(),
                                               "OnAfterDeserialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera* UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>());
}
inline void UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera::PixelPerfectCamera() {}
