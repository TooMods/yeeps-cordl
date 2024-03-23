#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRSystem_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRSystemData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRSystem_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystem_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
inline void UnityEngine::Rendering::Universal::__XRSystem__XRShaderIDs::setStaticF__SourceTexArraySlice(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SourceTexArraySlice", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__XRSystem__XRShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::__XRSystem__XRShaderIDs::getStaticF__SourceTexArraySlice() {
  return ::cordl_internals::getStaticField<int32_t, "_SourceTexArraySlice",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__XRSystem__XRShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::Universal::__XRSystem__XRShaderIDs::setStaticF__SRGBRead(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SRGBRead", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__XRSystem__XRShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::__XRSystem__XRShaderIDs::getStaticF__SRGBRead() {
  return ::cordl_internals::getStaticField<int32_t, "_SRGBRead", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__XRSystem__XRShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::Universal::__XRSystem__XRShaderIDs::setStaticF__SRGBWrite(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SRGBWrite", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__XRSystem__XRShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::__XRSystem__XRShaderIDs::getStaticF__SRGBWrite() {
  return ::cordl_internals::getStaticField<int32_t, "_SRGBWrite", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__XRSystem__XRShaderIDs*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__XRSystem__XRShaderIDs::__XRSystem__XRShaderIDs() {}
// Ctor Parameters [CppParam { name: "camera", ty: "::UnityW<::UnityEngine::Camera>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::Rendering::Universal::__XRSystem____c__DisplayClass26_0::__XRSystem____c__DisplayClass26_0(::UnityW<::UnityEngine::Camera> camera) noexcept {
  this->camera = camera;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__XRSystem____c__DisplayClass26_0::__XRSystem____c__DisplayClass26_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XRSystem::*)()>(&::UnityEngine::Rendering::Universal::XRSystem::_ctor)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x288bb24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystem.InitializeXRSystemData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XRSystem::*)(::UnityEngine::Rendering::Universal::XRSystemData*)>(
    &::UnityEngine::Rendering::Universal::XRSystem::InitializeXRSystemData)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x28905dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), "InitializeXRSystemData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XRSystemData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystem.GetDisplaySubsystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Rendering::Universal::XRSystem::GetDisplaySubsystem)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2890738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(),
                                                                               "GetDisplaySubsystem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystem.XRSystemInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Rendering::Universal::XRSystem::XRSystemInit)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x28907d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(),
                                                                               "XRSystemInit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystem.UpdateMSAALevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::UnityEngine::Rendering::Universal::XRSystem::UpdateMSAALevel)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x288343c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), "UpdateMSAALevel",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystem.GetMSAALevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::Universal::XRSystem::GetMSAALevel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2890978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(),
                                                                               "GetMSAALevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystem.UpdateRenderScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t)>(&::UnityEngine::Rendering::Universal::XRSystem::UpdateRenderScale)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2883578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), "UpdateRenderScale",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystem.GetMaxViews
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::XRSystem::*)()>(
    &::UnityEngine::Rendering::Universal::XRSystem::GetMaxViews)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28905c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(),
                                                                               "GetMaxViews", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystem.BeginLateLatching
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XRSystem::*)(
    ::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::XRPass*)>(&::UnityEngine::Rendering::Universal::XRSystem::BeginLateLatching)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2888084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), "BeginLateLatching", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XRPass*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystem.EndLateLatching
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XRSystem::*)(
    ::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::XRPass*)>(&::UnityEngine::Rendering::Universal::XRSystem::EndLateLatching)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x28880f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), "EndLateLatching", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XRPass*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystem.SetupFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::XRPass*>* (
    ::UnityEngine::Rendering::Universal::XRSystem::*)(::UnityEngine::Camera*, bool)>(&::UnityEngine::Rendering::Universal::XRSystem::SetupFrame)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x28874d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(),
                                                                               "SetupFrame", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystem.ReleaseFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XRSystem::*)()>(
    &::UnityEngine::Rendering::Universal::XRSystem::ReleaseFrame)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2888e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(),
                                                                               "ReleaseFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystem.RefreshXrSdk
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::XRSystem::*)()>(
    &::UnityEngine::Rendering::Universal::XRSystem::RefreshXrSdk)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2889a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(),
                                                                               "RefreshXrSdk", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystem.UpdateCameraData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XRSystem::*)(
    ByRef<::UnityEngine::Rendering::Universal::CameraData>, ByRef<::UnityEngine::Rendering::Universal::XRPass*>)>(&::UnityEngine::Rendering::Universal::XRSystem::UpdateCameraData)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0x28878a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), "UpdateCameraData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::XRPass*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystem.UpdateFromCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XRSystem::*)(
    ByRef<::UnityEngine::Rendering::Universal::XRPass*>, ::UnityEngine::Rendering::Universal::CameraData)>(&::UnityEngine::Rendering::Universal::XRSystem::UpdateFromCamera)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x2887e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), "UpdateFromCamera", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::XRPass*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystem.CreateLayoutFromXrSdk
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XRSystem::*)(::UnityEngine::Camera*, bool)>(
    &::UnityEngine::Rendering::Universal::XRSystem::CreateLayoutFromXrSdk)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x28909d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(),
                                                                               "CreateLayoutFromXrSdk", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystem.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XRSystem::*)()>(&::UnityEngine::Rendering::Universal::XRSystem::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2883824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystem.AddPassToFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XRSystem::*)(::UnityEngine::Rendering::Universal::XRPass*)>(
    &::UnityEngine::Rendering::Universal::XRSystem::AddPassToFrame)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x288e1c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), "AddPassToFrame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XRPass*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystem.RenderMirrorView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XRSystem::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*)>(&::UnityEngine::Rendering::Universal::XRSystem::RenderMirrorView)> {
  constexpr static std::size_t size = 0x798;
  constexpr static std::size_t addrs = 0x2888698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), "RenderMirrorView", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystem.OverrideForAutomatedTests
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XRSystem::*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::Universal::XRSystem::OverrideForAutomatedTests)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2890e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), "OverrideForAutomatedTests", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystem._CreateLayoutFromXrSdk_g__CanUseSinglePass_26_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass, ByRef<::UnityEngine::Rendering::Universal::__XRSystem____c__DisplayClass26_0>)>(
        &::UnityEngine::Rendering::Universal::XRSystem::_CreateLayoutFromXrSdk_g__CanUseSinglePass_26_0)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2890e14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), "<CreateLayoutFromXrSdk>g__CanUseSinglePass|26_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::__XRSystem____c__DisplayClass26_0>>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::XRPass*& UnityEngine::Rendering::Universal::XRSystem::__cordl_internal_get_emptyPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::XRPass*> const& UnityEngine::Rendering::Universal::XRSystem::__cordl_internal_get_emptyPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyPass;
}
constexpr void UnityEngine::Rendering::Universal::XRSystem::__cordl_internal_set_emptyPass(::UnityEngine::Rendering::Universal::XRPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___emptyPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::XRPass*>*& UnityEngine::Rendering::Universal::XRSystem::__cordl_internal_get_framePasses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___framePasses;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::XRPass*>*> const&
UnityEngine::Rendering::Universal::XRSystem::__cordl_internal_get_framePasses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___framePasses;
}
constexpr void UnityEngine::Rendering::Universal::XRSystem::__cordl_internal_set_framePasses(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::XRPass*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___framePasses)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::XRSystem::__cordl_internal_get_occlusionMeshMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occlusionMeshMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::XRSystem::__cordl_internal_get_occlusionMeshMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occlusionMeshMaterial;
}
constexpr void UnityEngine::Rendering::Universal::XRSystem::__cordl_internal_set_occlusionMeshMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___occlusionMeshMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::XRSystem::__cordl_internal_get_mirrorViewMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorViewMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::XRSystem::__cordl_internal_get_mirrorViewMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorViewMaterial;
}
constexpr void UnityEngine::Rendering::Universal::XRSystem::__cordl_internal_set_mirrorViewMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mirrorViewMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::MaterialPropertyBlock*& UnityEngine::Rendering::Universal::XRSystem::__cordl_internal_get_mirrorViewMaterialProperty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorViewMaterialProperty;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> const& UnityEngine::Rendering::Universal::XRSystem::__cordl_internal_get_mirrorViewMaterialProperty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorViewMaterialProperty;
}
constexpr void UnityEngine::Rendering::Universal::XRSystem::__cordl_internal_set_mirrorViewMaterialProperty(::UnityEngine::MaterialPropertyBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mirrorViewMaterialProperty)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& UnityEngine::Rendering::Universal::XRSystem::__cordl_internal_get_testRenderTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___testRenderTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& UnityEngine::Rendering::Universal::XRSystem::__cordl_internal_get_testRenderTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___testRenderTexture;
}
constexpr void UnityEngine::Rendering::Universal::XRSystem::__cordl_internal_set_testRenderTexture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___testRenderTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::XRSystem::setStaticF_displayList(::System::Collections::Generic::List_1<Il2CppObject*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "displayList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get>(
      std::forward<::System::Collections::Generic::List_1<Il2CppObject*>*>(value));
}
inline ::System::Collections::Generic::List_1<Il2CppObject*>* UnityEngine::Rendering::Universal::XRSystem::getStaticF_displayList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "displayList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get>();
}
inline void UnityEngine::Rendering::Universal::XRSystem::setStaticF_msaaLevel(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "msaaLevel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::XRSystem::getStaticF_msaaLevel() {
  return ::cordl_internals::getStaticField<int32_t, "msaaLevel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get>();
}
inline void UnityEngine::Rendering::Universal::XRSystem::setStaticF__XRMirrorProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "_XRMirrorProfilingSampler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::XRSystem::getStaticF__XRMirrorProfilingSampler() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "_XRMirrorProfilingSampler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get>();
}
inline ::UnityEngine::Rendering::Universal::XRSystem* UnityEngine::Rendering::Universal::XRSystem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::XRSystem*>());
}
inline void UnityEngine::Rendering::Universal::XRSystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::XRSystem::InitializeXRSystemData(::UnityEngine::Rendering::Universal::XRSystemData* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), "InitializeXRSystemData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XRSystemData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void UnityEngine::Rendering::Universal::XRSystem::GetDisplaySubsystem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(),
                                                                             "GetDisplaySubsystem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::XRSystem::XRSystemInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(),
                                                                             "XRSystemInit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::XRSystem::UpdateMSAALevel(int32_t level) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), "UpdateMSAALevel",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, level);
}
inline int32_t UnityEngine::Rendering::Universal::XRSystem::GetMSAALevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(),
                                                                             "GetMSAALevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::XRSystem::UpdateRenderScale(float_t renderScale) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), "UpdateRenderScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, renderScale);
}
inline int32_t UnityEngine::Rendering::Universal::XRSystem::GetMaxViews() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(),
                                                                             "GetMaxViews", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::XRSystem::BeginLateLatching(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::XRPass* xrPass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), "BeginLateLatching", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XRPass*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera, xrPass);
}
inline void UnityEngine::Rendering::Universal::XRSystem::EndLateLatching(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::XRPass* xrPass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), "EndLateLatching", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XRPass*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera, xrPass);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::XRPass*>* UnityEngine::Rendering::Universal::XRSystem::SetupFrame(::UnityEngine::Camera* camera,
                                                                                                                                                     bool enableXRRendering) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), "SetupFrame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::XRPass*>*, false>(this, ___internal_method, camera, enableXRRendering);
}
inline void UnityEngine::Rendering::Universal::XRSystem::ReleaseFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(),
                                                                             "ReleaseFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::XRSystem::RefreshXrSdk() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(),
                                                                             "RefreshXrSdk", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::XRSystem::UpdateCameraData(ByRef<::UnityEngine::Rendering::Universal::CameraData> baseCameraData,
                                                                          ByRef<::UnityEngine::Rendering::Universal::XRPass*> xr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), "UpdateCameraData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::XRPass*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseCameraData, xr);
}
inline void UnityEngine::Rendering::Universal::XRSystem::UpdateFromCamera(ByRef<::UnityEngine::Rendering::Universal::XRPass*> xrPass, ::UnityEngine::Rendering::Universal::CameraData cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), "UpdateFromCamera", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::XRPass*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrPass, cameraData);
}
inline void UnityEngine::Rendering::Universal::XRSystem::CreateLayoutFromXrSdk(::UnityEngine::Camera* camera, bool singlePassAllowed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), "CreateLayoutFromXrSdk", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera, singlePassAllowed);
}
inline void UnityEngine::Rendering::Universal::XRSystem::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::XRSystem::AddPassToFrame(::UnityEngine::Rendering::Universal::XRPass* xrPass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), "AddPassToFrame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XRPass*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrPass);
}
inline void UnityEngine::Rendering::Universal::XRSystem::RenderMirrorView(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), "RenderMirrorView", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, camera);
}
inline void UnityEngine::Rendering::Universal::XRSystem::OverrideForAutomatedTests(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), "OverrideForAutomatedTests", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera);
}
inline bool UnityEngine::Rendering::Universal::XRSystem::_CreateLayoutFromXrSdk_g__CanUseSinglePass_26_0(
    ::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass renderPass, ByRef<::UnityEngine::Rendering::Universal::__XRSystem____c__DisplayClass26_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystem*>::get(), "<CreateLayoutFromXrSdk>g__CanUseSinglePass|26_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::__XRSystem____c__DisplayClass26_0>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, renderPass, _cordl_fixed_empty_name_whitespace);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::XRSystem::XRSystem() {}
