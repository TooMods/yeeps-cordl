#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessPasses_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Renderer2D_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__ColorGradingLutPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__FinalBlitPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__PostProcessPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Light2DCullResult_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PixelPerfectBackgroundPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Render2DLightingPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Renderer2DData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Renderer2D_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableCullingParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__Renderer2D____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__Renderer2D____c::*)()>(
    &::UnityEngine::Rendering::Universal::__Renderer2D____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Renderer2D____c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__Renderer2D____c._Setup_b__34_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::__Renderer2D____c::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderPass*)>(&::UnityEngine::Rendering::Universal::__Renderer2D____c::_Setup_b__34_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2f41c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Renderer2D____c*>::get(), "<Setup>b__34_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::__Renderer2D____c::setStaticF___9(::UnityEngine::Rendering::Universal::__Renderer2D____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::__Renderer2D____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Renderer2D____c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::__Renderer2D____c*>(value));
}
inline ::UnityEngine::Rendering::Universal::__Renderer2D____c* UnityEngine::Rendering::Universal::__Renderer2D____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::__Renderer2D____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Renderer2D____c*>::get>();
}
inline void UnityEngine::Rendering::Universal::__Renderer2D____c::setStaticF___9__34_0(::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*, "<>9__34_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Renderer2D____c*>::get>(
      std::forward<::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*>(value));
}
inline ::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* UnityEngine::Rendering::Universal::__Renderer2D____c::getStaticF___9__34_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*, "<>9__34_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Renderer2D____c*>::get>();
}
inline ::UnityEngine::Rendering::Universal::__Renderer2D____c* UnityEngine::Rendering::Universal::__Renderer2D____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::__Renderer2D____c*>());
}
inline void UnityEngine::Rendering::Universal::__Renderer2D____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Renderer2D____c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::__Renderer2D____c::_Setup_b__34_0(::UnityEngine::Rendering::Universal::ScriptableRenderPass* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Renderer2D____c*>::get(), "<Setup>b__34_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__Renderer2D____c::__Renderer2D____c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2D.get_createColorTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Renderer2D::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2D::get_createColorTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f40aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(),
                                                                               "get_createColorTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2D.get_createDepthTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Renderer2D::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2D::get_createDepthTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f40ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(),
                                                                               "get_createDepthTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2D.get_colorGradingLutPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* (
    ::UnityEngine::Rendering::Universal::Renderer2D::*)()>(&::UnityEngine::Rendering::Universal::Renderer2D::get_colorGradingLutPass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f40abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(),
                                                                               "get_colorGradingLutPass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2D.get_postProcessPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::Internal::PostProcessPass* (
    ::UnityEngine::Rendering::Universal::Renderer2D::*)()>(&::UnityEngine::Rendering::Universal::Renderer2D::get_postProcessPass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f40ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(),
                                                                               "get_postProcessPass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2D.get_finalPostProcessPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::Internal::PostProcessPass* (
    ::UnityEngine::Rendering::Universal::Renderer2D::*)()>(&::UnityEngine::Rendering::Universal::Renderer2D::get_finalPostProcessPass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f40acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(),
                                                                               "get_finalPostProcessPass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2D.get_afterPostProcessColorHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::RenderTargetHandle (::UnityEngine::Rendering::Universal::Renderer2D::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2D::get_afterPostProcessColorHandle)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2f40ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(), "get_afterPostProcessColorHandle",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2D.get_colorGradingLutHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::RenderTargetHandle (::UnityEngine::Rendering::Universal::Renderer2D::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2D::get_colorGradingLutHandle)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2f40af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(),
                                                                               "get_colorGradingLutHandle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2D.SupportedCameraStackingTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Renderer2D::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2D::SupportedCameraStackingTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f40b1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Renderer2D::*)(::UnityEngine::Rendering::Universal::Renderer2DData*)>(
    &::UnityEngine::Rendering::Universal::Renderer2D::_ctor)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x2f40b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Renderer2DData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2D.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Renderer2D::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Renderer2D::Dispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f40db0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2D.GetRenderer2DData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData> (::UnityEngine::Rendering::Universal::Renderer2D::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2D::GetRenderer2DData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f40dbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(),
                                                                               "GetRenderer2DData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2D.CreateRenderTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Renderer2D::*)(
    ByRef<::UnityEngine::Rendering::Universal::CameraData>, bool, ::UnityEngine::FilterMode, ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>,
    ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>)>(&::UnityEngine::Rendering::Universal::Renderer2D::CreateRenderTextures)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x2f40dc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(), "CreateRenderTextures", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FilterMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2D.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Renderer2D::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Renderer2D::Setup)> {
  constexpr static std::size_t size = 0x8fc;
  constexpr static std::size_t addrs = 0x2f41174;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2D.SetupCullingParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Renderer2D::*)(
    ByRef<::UnityEngine::Rendering::ScriptableCullingParameters>, ByRef<::UnityEngine::Rendering::Universal::CameraData>)>(&::UnityEngine::Rendering::Universal::Renderer2D::SetupCullingParameters)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2f41a70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2D.FinishRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Renderer2D::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::Renderer2D::FinishRendering)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2f41ae4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(), 11));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::Render2DLightingPass*& UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_get_m_Render2DLightingPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Render2DLightingPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Render2DLightingPass*> const&
UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_get_m_Render2DLightingPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Render2DLightingPass;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_set_m_Render2DLightingPass(::UnityEngine::Rendering::Universal::Render2DLightingPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Render2DLightingPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::PixelPerfectBackgroundPass*& UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_get_m_PixelPerfectBackgroundPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PixelPerfectBackgroundPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::PixelPerfectBackgroundPass*> const&
UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_get_m_PixelPerfectBackgroundPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PixelPerfectBackgroundPass;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_set_m_PixelPerfectBackgroundPass(::UnityEngine::Rendering::Universal::PixelPerfectBackgroundPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PixelPerfectBackgroundPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*& UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_get_m_FinalBlitPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FinalBlitPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*> const&
UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_get_m_FinalBlitPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FinalBlitPass;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_set_m_FinalBlitPass(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FinalBlitPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Light2DCullResult*& UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_get_m_LightCullResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightCullResult;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Light2DCullResult*> const&
UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_get_m_LightCullResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightCullResult;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_set_m_LightCullResult(::UnityEngine::Rendering::Universal::Light2DCullResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LightCullResult)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_get_m_UseDepthStencilBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseDepthStencilBuffer;
}
constexpr bool const& UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_get_m_UseDepthStencilBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseDepthStencilBuffer;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_set_m_UseDepthStencilBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseDepthStencilBuffer = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_get_m_CreateColorTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreateColorTexture;
}
constexpr bool const& UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_get_m_CreateColorTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreateColorTexture;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_set_m_CreateColorTexture(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CreateColorTexture = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_get_m_CreateDepthTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreateDepthTexture;
}
constexpr bool const& UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_get_m_CreateDepthTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreateDepthTexture;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_set_m_CreateDepthTexture(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CreateDepthTexture = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_get_k_ColorTextureHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k_ColorTextureHandle;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_get_k_ColorTextureHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k_ColorTextureHandle;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_set_k_ColorTextureHandle(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___k_ColorTextureHandle = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_get_k_DepthTextureHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k_DepthTextureHandle;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_get_k_DepthTextureHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k_DepthTextureHandle;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_set_k_DepthTextureHandle(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___k_DepthTextureHandle = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_get_m_BlitMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlitMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_get_m_BlitMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlitMaterial;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_set_m_BlitMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BlitMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_get_m_SamplingMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SamplingMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_get_m_SamplingMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SamplingMaterial;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_set_m_SamplingMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SamplingMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData>& UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_get_m_Renderer2DData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Renderer2DData;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData> const& UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_get_m_Renderer2DData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Renderer2DData;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_set_m_Renderer2DData(::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Renderer2DData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::PostProcessPasses& UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_get_m_PostProcessPasses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PostProcessPasses;
}
constexpr ::UnityEngine::Rendering::Universal::PostProcessPasses const& UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_get_m_PostProcessPasses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PostProcessPasses;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2D::__cordl_internal_set_m_PostProcessPasses(::UnityEngine::Rendering::Universal::PostProcessPasses value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PostProcessPasses = value;
}
inline void UnityEngine::Rendering::Universal::Renderer2D::setStaticF_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSampler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Renderer2D::getStaticF_m_ProfilingSampler() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSampler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get>();
}
inline bool UnityEngine::Rendering::Universal::Renderer2D::get_createColorTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(),
                                                                             "get_createColorTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Renderer2D::get_createDepthTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(),
                                                                             "get_createDepthTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* UnityEngine::Rendering::Universal::Renderer2D::get_colorGradingLutPass() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(),
                                                                             "get_colorGradingLutPass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::PostProcessPass* UnityEngine::Rendering::Universal::Renderer2D::get_postProcessPass() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(),
                                                                             "get_postProcessPass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::PostProcessPass* UnityEngine::Rendering::Universal::Renderer2D::get_finalPostProcessPass() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(),
                                                                             "get_finalPostProcessPass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::RenderTargetHandle UnityEngine::Rendering::Universal::Renderer2D::get_afterPostProcessColorHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(),
                                                                             "get_afterPostProcessColorHandle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderTargetHandle, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::RenderTargetHandle UnityEngine::Rendering::Universal::Renderer2D::get_colorGradingLutHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(),
                                                                             "get_colorGradingLutHandle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderTargetHandle, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Renderer2D::SupportedCameraStackingTypes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Renderer2D* UnityEngine::Rendering::Universal::Renderer2D::New_ctor(::UnityEngine::Rendering::Universal::Renderer2DData* data) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Renderer2D*>(data));
}
inline void UnityEngine::Rendering::Universal::Renderer2D::_ctor(::UnityEngine::Rendering::Universal::Renderer2DData* data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Renderer2DData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void UnityEngine::Rendering::Universal::Renderer2D::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData> UnityEngine::Rendering::Universal::Renderer2D::GetRenderer2DData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(),
                                                                             "GetRenderer2DData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Renderer2D::CreateRenderTextures(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData, bool forceCreateColorTexture,
                                                                                ::UnityEngine::FilterMode colorTextureFilterMode, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle> colorTargetHandle,
                                                                                ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle> depthTargetHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(), "CreateRenderTextures", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FilterMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cameraData, forceCreateColorTexture, colorTextureFilterMode, cmd, colorTargetHandle, depthTargetHandle);
}
inline void UnityEngine::Rendering::Universal::Renderer2D::Setup(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::Renderer2D::SetupCullingParameters(ByRef<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters,
                                                                                  ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cullingParameters, cameraData);
}
inline void UnityEngine::Rendering::Universal::Renderer2D::FinishRendering(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2D*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Renderer2D::Renderer2D() {}
