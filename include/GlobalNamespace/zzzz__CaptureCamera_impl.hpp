#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "GlobalNamespace/zzzz__CaptureCamera_def.hpp"
#include "GlobalNamespace/zzzz__CaptureCamera_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "dimensions", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::__CaptureCamera__CaptureData::__CaptureCamera__CaptureData(::StringW name, ::UnityEngine::Vector2Int dimensions) noexcept {
  this->name = name;
  this->dimensions = dimensions;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CaptureCamera__CaptureData::__CaptureCamera__CaptureData() {}
//  Writing Method size for method: ::GlobalNamespace::CaptureCamera.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CaptureCamera::*)()>(&::GlobalNamespace::CaptureCamera::Start)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2756800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CaptureCamera*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CaptureCamera.Capture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CaptureCamera::*)(::GlobalNamespace::__CaptureCamera__CaptureData)>(
    &::GlobalNamespace::CaptureCamera::Capture)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x2756870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CaptureCamera*>::get(), "Capture", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__CaptureCamera__CaptureData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CaptureCamera.SaveTextureAsPNG
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Texture2D*, ::StringW)>(&::GlobalNamespace::CaptureCamera::SaveTextureAsPNG)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2756ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CaptureCamera*>::get(), "SaveTextureAsPNG", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CaptureCamera._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CaptureCamera::*)()>(&::GlobalNamespace::CaptureCamera::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2756e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CaptureCamera*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__CaptureCamera__CaptureData, ::Array<::GlobalNamespace::__CaptureCamera__CaptureData>*>& GlobalNamespace::CaptureCamera::__cordl_internal_get_captureDatas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___captureDatas;
}
constexpr ::ArrayW<::GlobalNamespace::__CaptureCamera__CaptureData, ::Array<::GlobalNamespace::__CaptureCamera__CaptureData>*> const&
GlobalNamespace::CaptureCamera::__cordl_internal_get_captureDatas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___captureDatas;
}
constexpr void
GlobalNamespace::CaptureCamera::__cordl_internal_set_captureDatas(::ArrayW<::GlobalNamespace::__CaptureCamera__CaptureData, ::Array<::GlobalNamespace::__CaptureCamera__CaptureData>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___captureDatas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::CaptureCamera::__cordl_internal_get_sizeMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sizeMultiplier;
}
constexpr int32_t const& GlobalNamespace::CaptureCamera::__cordl_internal_get_sizeMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sizeMultiplier;
}
constexpr void GlobalNamespace::CaptureCamera::__cordl_internal_set_sizeMultiplier(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sizeMultiplier = value;
}
constexpr bool& GlobalNamespace::CaptureCamera::__cordl_internal_get_includeCameraBackground() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeCameraBackground;
}
constexpr bool const& GlobalNamespace::CaptureCamera::__cordl_internal_get_includeCameraBackground() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeCameraBackground;
}
constexpr void GlobalNamespace::CaptureCamera::__cordl_internal_set_includeCameraBackground(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___includeCameraBackground = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::CaptureCamera::__cordl_internal_get_renderCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::CaptureCamera::__cordl_internal_get_renderCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderCamera;
}
constexpr void GlobalNamespace::CaptureCamera::__cordl_internal_set_renderCamera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___renderCamera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::CaptureCamera::__cordl_internal_get_renderTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::CaptureCamera::__cordl_internal_get_renderTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderTexture;
}
constexpr void GlobalNamespace::CaptureCamera::__cordl_internal_set_renderTexture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___renderTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::CaptureCamera::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CaptureCamera*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CaptureCamera::Capture(::GlobalNamespace::__CaptureCamera__CaptureData captureData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CaptureCamera*>::get(), "Capture", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__CaptureCamera__CaptureData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, captureData);
}
/// @param fileName: ::StringW (default: u"capture")
inline void GlobalNamespace::CaptureCamera::SaveTextureAsPNG(::UnityEngine::Texture2D* texture, ::StringW fileName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CaptureCamera*>::get(), "SaveTextureAsPNG", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, texture, fileName);
}
inline ::GlobalNamespace::CaptureCamera* GlobalNamespace::CaptureCamera::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CaptureCamera*>());
}
inline void GlobalNamespace::CaptureCamera::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CaptureCamera*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CaptureCamera::CaptureCamera() {}
