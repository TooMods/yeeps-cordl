#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingQuality_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraOverrideOption_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraRenderType_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__VolumeFrameworkUpdateMode_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalAdditionalCameraData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingQuality_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraOverrideOption_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraRenderType_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MotionVectorsPersistentData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalAdditionalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__VolumeFrameworkUpdateMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__IAdditionalData_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeStack_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c::*)()>(
    &::UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2734ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c._UpdateCameraStack_b__46_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c::*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c::_UpdateCameraStack_b__46_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2734bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c*>::get(), "<UpdateCameraStack>b__46_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c::setStaticF___9(::UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c*>(value));
}
inline ::UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c* UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c*>::get>();
}
inline void UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c::setStaticF___9__46_0(::System::Predicate_1<::UnityW<::UnityEngine::Camera>>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Camera>>*, "<>9__46_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c*>::get>(
      std::forward<::System::Predicate_1<::UnityW<::UnityEngine::Camera>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::Camera>>* UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c::getStaticF___9__46_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Camera>>*, "<>9__46_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c*>::get>();
}
inline ::UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c* UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c*>());
}
inline void UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c::_UpdateCameraStack_b__46_0(::UnityEngine::Camera* cam) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c*>::get(), "<UpdateCameraStack>b__46_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cam);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__UniversalAdditionalCameraData____c::__UniversalAdditionalCameraData____c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2733d64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "get_version",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_defaultAdditionalCameraData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData> (*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_defaultAdditionalCameraData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2733d6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                                 "get_defaultAdditionalCameraData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_camera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Camera> (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_camera)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2733f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "get_camera",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_renderShadows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_renderShadows)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2733fb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                                 "get_renderShadows", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_renderShadows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_renderShadows)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2733fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_renderShadows",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_requiresDepthOption
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::CameraOverrideOption (
    ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(&::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_requiresDepthOption)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2733fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                                 "get_requiresDepthOption", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_requiresDepthOption
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(
    ::UnityEngine::Rendering::Universal::CameraOverrideOption)>(&::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_requiresDepthOption)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2733fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_requiresDepthOption",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraOverrideOption>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_requiresColorOption
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::CameraOverrideOption (
    ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(&::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_requiresColorOption)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2733fd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                                 "get_requiresColorOption", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_requiresColorOption
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(
    ::UnityEngine::Rendering::Universal::CameraOverrideOption)>(&::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_requiresColorOption)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2733fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_requiresColorOption",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraOverrideOption>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_renderType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::CameraRenderType (
    ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(&::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_renderType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2733fe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "get_renderType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_renderType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(
    ::UnityEngine::Rendering::Universal::CameraRenderType)>(&::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_renderType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2733fec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_renderType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraRenderType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_cameraStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* (
    ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(&::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_cameraStack)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2733ff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "get_cameraStack",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.UpdateCameraStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::UpdateCameraStack)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x27344c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                                 "UpdateCameraStack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_clearDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_clearDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2734808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "get_clearDepth",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_requiresDepthTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_requiresDepthTexture)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2734810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                                 "get_requiresDepthTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_requiresDepthTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_requiresDepthTexture)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2734894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_requiresDepthTexture",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_requiresColorTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_requiresColorTexture)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x27348b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                                 "get_requiresColorTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_requiresColorTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_requiresColorTexture)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2734934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_requiresColorTexture",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_scriptableRenderer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::ScriptableRenderer* (
    ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(&::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_scriptableRenderer)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x2734178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                                 "get_scriptableRenderer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.SetRenderer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::SetRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2734950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "SetRenderer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_volumeLayerMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_volumeLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2734958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                                 "get_volumeLayerMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_volumeLayerMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(::UnityEngine::LayerMask)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_volumeLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2734960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_volumeLayerMask",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_volumeTrigger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_volumeTrigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2734968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                                 "get_volumeTrigger", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_volumeTrigger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(::UnityEngine::Transform*)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_volumeTrigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2734970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_volumeTrigger",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_volumeFrameworkUpdateMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode (
    ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(&::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_volumeFrameworkUpdateMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2734978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                                 "get_volumeFrameworkUpdateMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_volumeFrameworkUpdateMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(
    ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode)>(&::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_volumeFrameworkUpdateMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2734980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_volumeFrameworkUpdateMode",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_requiresVolumeFrameworkUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_requiresVolumeFrameworkUpdate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2733824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                                 "get_requiresVolumeFrameworkUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_volumeStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::VolumeStack* (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_volumeStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2734988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "get_volumeStack",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_volumeStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(::UnityEngine::Rendering::VolumeStack*)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_volumeStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2734990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_volumeStack", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeStack*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_renderPostProcessing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_renderPostProcessing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2734998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                                 "get_renderPostProcessing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_renderPostProcessing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_renderPostProcessing)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27349a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_renderPostProcessing",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_antialiasing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::AntialiasingMode (
    ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(&::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_antialiasing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27349ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "get_antialiasing",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_antialiasing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(
    ::UnityEngine::Rendering::Universal::AntialiasingMode)>(&::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_antialiasing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27349b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_antialiasing",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::AntialiasingMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_antialiasingQuality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::AntialiasingQuality (
    ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(&::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_antialiasingQuality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27349bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                                 "get_antialiasingQuality", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_antialiasingQuality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(
    ::UnityEngine::Rendering::Universal::AntialiasingQuality)>(&::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_antialiasingQuality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27349c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_antialiasingQuality",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::AntialiasingQuality>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_motionVectorsPersistentData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData* (
    ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(&::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_motionVectorsPersistentData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27349cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                                 "get_motionVectorsPersistentData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_stopNaN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_stopNaN)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27349d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "get_stopNaN",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_stopNaN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_stopNaN)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27349dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_stopNaN",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_dithering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_dithering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27349e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "get_dithering",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_dithering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_dithering)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27349f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_dithering",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_allowXRRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_allowXRRendering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27349fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                                 "get_allowXRRendering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_allowXRRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_allowXRRendering)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2734a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_allowXRRendering",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2734a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                                 "OnBeforeSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2734a14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                                 "OnAfterDeserialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.OnDrawGizmos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2734a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "OnDrawGizmos",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2733e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IAdditionalData"
constexpr UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::operator ::UnityEngine::Rendering::IAdditionalData*() noexcept {
  return static_cast<::UnityEngine::Rendering::IAdditionalData*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IAdditionalData"
constexpr ::UnityEngine::Rendering::IAdditionalData* UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::i___UnityEngine__Rendering__IAdditionalData() noexcept {
  return static_cast<::UnityEngine::Rendering::IAdditionalData*>(static_cast<void*>(this));
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RenderShadows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderShadows;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RenderShadows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderShadows;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_RenderShadows(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderShadows = value;
}
constexpr ::UnityEngine::Rendering::Universal::CameraOverrideOption& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RequiresDepthTextureOption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequiresDepthTextureOption;
}
constexpr ::UnityEngine::Rendering::Universal::CameraOverrideOption const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RequiresDepthTextureOption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequiresDepthTextureOption;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_RequiresDepthTextureOption(::UnityEngine::Rendering::Universal::CameraOverrideOption value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RequiresDepthTextureOption = value;
}
constexpr ::UnityEngine::Rendering::Universal::CameraOverrideOption& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RequiresOpaqueTextureOption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequiresOpaqueTextureOption;
}
constexpr ::UnityEngine::Rendering::Universal::CameraOverrideOption const&
UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RequiresOpaqueTextureOption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequiresOpaqueTextureOption;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_RequiresOpaqueTextureOption(::UnityEngine::Rendering::Universal::CameraOverrideOption value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RequiresOpaqueTextureOption = value;
}
constexpr ::UnityEngine::Rendering::Universal::CameraRenderType& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_CameraType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraType;
}
constexpr ::UnityEngine::Rendering::Universal::CameraRenderType const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_CameraType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraType;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_CameraType(::UnityEngine::Rendering::Universal::CameraRenderType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CameraType = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_Cameras() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cameras;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*> const&
UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_Cameras() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cameras;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_Cameras(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Cameras)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RendererIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererIndex;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RendererIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererIndex;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_RendererIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RendererIndex = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_VolumeLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeLayerMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_VolumeLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeLayerMask;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_VolumeLayerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VolumeLayerMask = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_VolumeTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeTrigger;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_VolumeTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeTrigger;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_VolumeTrigger(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VolumeTrigger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_VolumeFrameworkUpdateModeOption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeFrameworkUpdateModeOption;
}
constexpr ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode const&
UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_VolumeFrameworkUpdateModeOption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeFrameworkUpdateModeOption;
}
constexpr void
UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_VolumeFrameworkUpdateModeOption(::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VolumeFrameworkUpdateModeOption = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RenderPostProcessing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderPostProcessing;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RenderPostProcessing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderPostProcessing;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_RenderPostProcessing(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderPostProcessing = value;
}
constexpr ::UnityEngine::Rendering::Universal::AntialiasingMode& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_Antialiasing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Antialiasing;
}
constexpr ::UnityEngine::Rendering::Universal::AntialiasingMode const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_Antialiasing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Antialiasing;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_Antialiasing(::UnityEngine::Rendering::Universal::AntialiasingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Antialiasing = value;
}
constexpr ::UnityEngine::Rendering::Universal::AntialiasingQuality& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_AntialiasingQuality() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AntialiasingQuality;
}
constexpr ::UnityEngine::Rendering::Universal::AntialiasingQuality const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_AntialiasingQuality() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AntialiasingQuality;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_AntialiasingQuality(::UnityEngine::Rendering::Universal::AntialiasingQuality value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AntialiasingQuality = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_StopNaN() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StopNaN;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_StopNaN() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StopNaN;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_StopNaN(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StopNaN = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_Dithering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dithering;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_Dithering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dithering;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_Dithering(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Dithering = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_ClearDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClearDepth;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_ClearDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClearDepth;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_ClearDepth(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClearDepth = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_AllowXRRendering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowXRRendering;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_AllowXRRendering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowXRRendering;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_AllowXRRendering(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowXRRendering = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_Camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_Camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Camera;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_Camera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Camera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RequiresDepthTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequiresDepthTexture;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RequiresDepthTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequiresDepthTexture;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_RequiresDepthTexture(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RequiresDepthTexture = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RequiresColorTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequiresColorTexture;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RequiresColorTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequiresColorTexture;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_RequiresColorTexture(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RequiresColorTexture = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr float_t const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_Version(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
constexpr ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_MotionVectorsPersistentData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MotionVectorsPersistentData;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*> const&
UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_MotionVectorsPersistentData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MotionVectorsPersistentData;
}
constexpr void
UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_MotionVectorsPersistentData(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MotionVectorsPersistentData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::VolumeStack*& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_VolumeStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeStack;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::VolumeStack*> const&
UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_VolumeStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeStack;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_VolumeStack(::UnityEngine::Rendering::VolumeStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VolumeStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void
UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::setStaticF_s_DefaultAdditionalCameraData(::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData>, "s_DefaultAdditionalCameraData",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get>(
      std::forward<::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData>>(value));
}
inline ::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData> UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::getStaticF_s_DefaultAdditionalCameraData() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData>, "s_DefaultAdditionalCameraData",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get>();
}
inline float_t UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_version() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "get_version",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData> UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_defaultAdditionalCameraData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                               "get_defaultAdditionalCameraData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_camera() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "get_camera",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_renderShadows() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "get_renderShadows",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_renderShadows(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_renderShadows",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::CameraOverrideOption UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_requiresDepthOption() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                               "get_requiresDepthOption", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::CameraOverrideOption, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_requiresDepthOption(::UnityEngine::Rendering::Universal::CameraOverrideOption value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_requiresDepthOption",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraOverrideOption>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::CameraOverrideOption UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_requiresColorOption() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                               "get_requiresColorOption", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::CameraOverrideOption, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_requiresColorOption(::UnityEngine::Rendering::Universal::CameraOverrideOption value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_requiresColorOption",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraOverrideOption>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::CameraRenderType UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_renderType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "get_renderType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::CameraRenderType, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_renderType(::UnityEngine::Rendering::Universal::CameraRenderType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_renderType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraRenderType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_cameraStack() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "get_cameraStack",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::UpdateCameraStack() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "UpdateCameraStack",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_clearDepth() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "get_clearDepth",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_requiresDepthTexture() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                               "get_requiresDepthTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_requiresDepthTexture(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_requiresDepthTexture",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_requiresColorTexture() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                               "get_requiresColorTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_requiresColorTexture(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_requiresColorTexture",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_scriptableRenderer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                               "get_scriptableRenderer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ScriptableRenderer*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::SetRenderer(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "SetRenderer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline ::UnityEngine::LayerMask UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_volumeLayerMask() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                               "get_volumeLayerMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_volumeLayerMask(::UnityEngine::LayerMask value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_volumeLayerMask",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_volumeTrigger() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "get_volumeTrigger",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_volumeTrigger(::UnityEngine::Transform* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_volumeTrigger", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_volumeFrameworkUpdateMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                               "get_volumeFrameworkUpdateMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_volumeFrameworkUpdateMode(::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_volumeFrameworkUpdateMode",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_requiresVolumeFrameworkUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                               "get_requiresVolumeFrameworkUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::VolumeStack* UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_volumeStack() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "get_volumeStack",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::VolumeStack*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_volumeStack(::UnityEngine::Rendering::VolumeStack* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_volumeStack", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeStack*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_renderPostProcessing() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                               "get_renderPostProcessing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_renderPostProcessing(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_renderPostProcessing",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::AntialiasingMode UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_antialiasing() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "get_antialiasing",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::AntialiasingMode, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_antialiasing(::UnityEngine::Rendering::Universal::AntialiasingMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_antialiasing", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::AntialiasingMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::AntialiasingQuality UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_antialiasingQuality() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                               "get_antialiasingQuality", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::AntialiasingQuality, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_antialiasingQuality(::UnityEngine::Rendering::Universal::AntialiasingQuality value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_antialiasingQuality",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::AntialiasingQuality>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData* UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_motionVectorsPersistentData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                               "get_motionVectorsPersistentData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_stopNaN() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "get_stopNaN",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_stopNaN(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_stopNaN",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_dithering() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "get_dithering",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_dithering(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_dithering",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_allowXRRendering() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(),
                                               "get_allowXRRendering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_allowXRRendering(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "set_allowXRRendering",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "OnBeforeSerialize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "OnAfterDeserialize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::OnDrawGizmos() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), "OnDrawGizmos",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>());
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::UniversalAdditionalCameraData() {}
