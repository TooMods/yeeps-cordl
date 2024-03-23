#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__Light2DBlendStyle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Light2DBlendStyle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Light2DBlendStyle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel::__Light2DBlendStyle__TextureChannel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel::__Light2DBlendStyle__TextureChannel() {}
constexpr ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel::R{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel::G{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel::B{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel::A{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel::OneMinusR{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel::OneMinusG{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel::OneMinusB{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel::OneMinusA{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter.get_mask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter::*)()>(
    &::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter::get_mask)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f35514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter>::get(), "get_mask",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter.set_mask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter::*)(::UnityEngine::Vector4)>(
    &::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter::set_mask)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f35520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter>::get(), "set_mask",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter.get_inverted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter::*)()>(
    &::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter::get_inverted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f3552c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter>::get(),
                                                 "get_inverted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter.set_inverted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter::*)(::UnityEngine::Vector4)>(
    &::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter::set_inverted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f35538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter>::get(), "set_inverted",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter::*)(
    ::UnityEngine::Vector4, ::UnityEngine::Vector4)>(&::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2f354d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter::get_mask() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter>::get(), "get_mask",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter::set_mask(::UnityEngine::Vector4 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter>::get(), "set_mask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter::get_inverted() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter>::get(),
                                               "get_inverted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter::set_inverted(::UnityEngine::Vector4 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter>::get(), "set_inverted",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter::_ctor(::UnityEngine::Vector4 m, ::UnityEngine::Vector4 i) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, m, i);
}
// Ctor Parameters [CppParam { name: "_mask_k__BackingField", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "_inverted_k__BackingField", ty:
// "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter::__Light2DBlendStyle__MaskChannelFilter(::UnityEngine::Vector4 _mask_k__BackingField,
                                                                                                                              ::UnityEngine::Vector4 _inverted_k__BackingField) noexcept {
  this->_mask_k__BackingField = _mask_k__BackingField;
  this->_inverted_k__BackingField = _inverted_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter::__Light2DBlendStyle__MaskChannelFilter() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendMode::__Light2DBlendStyle__BlendMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendMode::__Light2DBlendStyle__BlendMode() {}
constexpr ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendMode UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendMode::Additive{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendMode UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendMode::Multiply{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendMode UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendMode::Subtractive{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "multiplicative", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "additive", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendFactors::__Light2DBlendStyle__BlendFactors(float_t multiplicative, float_t additive) noexcept {
  this->multiplicative = multiplicative;
  this->additive = additive;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendFactors::__Light2DBlendStyle__BlendFactors() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2DBlendStyle.get_blendFactors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rendering::Universal::Light2DBlendStyle::*)()>(
    &::UnityEngine::Rendering::Universal::Light2DBlendStyle::get_blendFactors)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2f35364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DBlendStyle>::get(),
                                                                               "get_blendFactors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2DBlendStyle.get_maskTextureChannelFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter (
    ::UnityEngine::Rendering::Universal::Light2DBlendStyle::*)()>(&::UnityEngine::Rendering::Universal::Light2DBlendStyle::get_maskTextureChannelFilter)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2f35398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DBlendStyle>::get(),
                                                                               "get_maskTextureChannelFilter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2DBlendStyle.get_isDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Light2DBlendStyle::*)()>(
    &::UnityEngine::Rendering::Universal::Light2DBlendStyle::get_isDirty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f354ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DBlendStyle>::get(),
                                                                               "get_isDirty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2DBlendStyle.set_isDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2DBlendStyle::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Light2DBlendStyle::set_isDirty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f354f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DBlendStyle>::get(), "set_isDirty",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2DBlendStyle.get_hasRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Light2DBlendStyle::*)()>(
    &::UnityEngine::Rendering::Universal::Light2DBlendStyle::get_hasRenderTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f35500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DBlendStyle>::get(),
                                                                               "get_hasRenderTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2DBlendStyle.set_hasRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2DBlendStyle::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Light2DBlendStyle::set_hasRenderTarget)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f35508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DBlendStyle>::get(), "set_hasRenderTarget",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2 UnityEngine::Rendering::Universal::Light2DBlendStyle::get_blendFactors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DBlendStyle>::get(),
                                                                             "get_blendFactors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter UnityEngine::Rendering::Universal::Light2DBlendStyle::get_maskTextureChannelFilter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DBlendStyle>::get(),
                                                                             "get_maskTextureChannelFilter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Light2DBlendStyle::get_isDirty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DBlendStyle>::get(),
                                                                             "get_isDirty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2DBlendStyle::set_isDirty(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DBlendStyle>::get(), "set_isDirty",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Light2DBlendStyle::get_hasRenderTarget() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DBlendStyle>::get(),
                                                                             "get_hasRenderTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2DBlendStyle::set_hasRenderTarget(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DBlendStyle>::get(), "set_hasRenderTarget",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "maskTextureChannel", ty:
// "::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel", modifiers: "", def_value: Some("{}") }, CppParam { name: "blendMode", ty:
// "::UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "_isDirty_k__BackingField", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_hasRenderTarget_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderTargetHandle", ty:
// "::UnityEngine::Rendering::Universal::RenderTargetHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::Light2DBlendStyle::Light2DBlendStyle(::StringW name, ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel maskTextureChannel,
                                                                                    ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendMode blendMode, bool _isDirty_k__BackingField,
                                                                                    bool _hasRenderTarget_k__BackingField,
                                                                                    ::UnityEngine::Rendering::Universal::RenderTargetHandle renderTargetHandle) noexcept {
  this->name = name;
  this->maskTextureChannel = maskTextureChannel;
  this->blendMode = blendMode;
  this->_isDirty_k__BackingField = _isDirty_k__BackingField;
  this->_hasRenderTarget_k__BackingField = _hasRenderTarget_k__BackingField;
  this->renderTargetHandle = renderTargetHandle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Light2DBlendStyle::Light2DBlendStyle() {}
