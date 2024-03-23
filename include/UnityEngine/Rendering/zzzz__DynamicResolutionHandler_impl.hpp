#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicResScalePolicyType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicResScalerSlot_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicResUpscaleFilter_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicResolutionHandler_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicResolutionType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GlobalDynamicResolutionSettings_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicResolutionHandler_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__WeakReference_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicResScalePolicyType_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicResScalerSlot_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicResUpscaleFilter_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicResolutionHandler_def.hpp"
#include "UnityEngine/Rendering/zzzz__GlobalDynamicResolutionSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__PerformDynamicRes_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::Rendering::DynamicResScalePolicyType", modifiers: "", def_value: Some("{}") }, CppParam { name: "method", ty:
// "::UnityEngine::Rendering::PerformDynamicRes*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::Rendering::__DynamicResolutionHandler__ScalerContainer::__DynamicResolutionHandler__ScalerContainer(::UnityEngine::Rendering::DynamicResScalePolicyType type,
                                                                                                                             ::UnityEngine::Rendering::PerformDynamicRes* method) noexcept {
  this->type = type;
  this->method = method;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DynamicResolutionHandler__ScalerContainer::__DynamicResolutionHandler__ScalerContainer() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType::__DynamicResolutionHandler__UpsamplerScheduleType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType::__DynamicResolutionHandler__UpsamplerScheduleType() {}
constexpr ::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType::BeforePost{ static_cast<int32_t>(
    0x0) };
constexpr ::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType::AfterPost{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DynamicResolutionHandler::*)()>(
    &::UnityEngine::Rendering::DynamicResolutionHandler::Reset)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1bd0e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                               "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.get_filter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::DynamicResUpscaleFilter (::UnityEngine::Rendering::DynamicResolutionHandler::*)()>(
    &::UnityEngine::Rendering::DynamicResolutionHandler::get_filter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd0eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                               "get_filter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.set_filter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DynamicResolutionHandler::*)(::UnityEngine::Rendering::DynamicResUpscaleFilter)>(
    &::UnityEngine::Rendering::DynamicResolutionHandler::set_filter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd0ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "set_filter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DynamicResUpscaleFilter>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.get_finalViewport
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (::UnityEngine::Rendering::DynamicResolutionHandler::*)()>(
    &::UnityEngine::Rendering::DynamicResolutionHandler::get_finalViewport)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd0ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                               "get_finalViewport", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.set_finalViewport
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DynamicResolutionHandler::*)(::UnityEngine::Vector2Int)>(
    &::UnityEngine::Rendering::DynamicResolutionHandler::set_finalViewport)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd0ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "set_finalViewport", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.set_runUpscalerFilterOnFullResolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DynamicResolutionHandler::*)(bool)>(
    &::UnityEngine::Rendering::DynamicResolutionHandler::set_runUpscalerFilterOnFullResolution)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1bd0ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "set_runUpscalerFilterOnFullResolution",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.get_runUpscalerFilterOnFullResolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::DynamicResolutionHandler::*)()>(
    &::UnityEngine::Rendering::DynamicResolutionHandler::get_runUpscalerFilterOnFullResolution)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1bd0ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                 "get_runUpscalerFilterOnFullResolution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.FlushScalableBufferManagerState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::DynamicResolutionHandler::*)()>(
    &::UnityEngine::Rendering::DynamicResolutionHandler::FlushScalableBufferManagerState)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x1bd0f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "FlushScalableBufferManagerState",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.GetOrCreateDrsInstanceHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::DynamicResolutionHandler* (*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::DynamicResolutionHandler::GetOrCreateDrsInstanceHandler)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x1bd1070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "GetOrCreateDrsInstanceHandler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.set_upsamplerSchedule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DynamicResolutionHandler::*)(
    ::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType)>(&::UnityEngine::Rendering::DynamicResolutionHandler::set_upsamplerSchedule)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd1524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "set_upsamplerSchedule", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.get_upsamplerSchedule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType (
    ::UnityEngine::Rendering::DynamicResolutionHandler::*)()>(&::UnityEngine::Rendering::DynamicResolutionHandler::get_upsamplerSchedule)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd152c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                               "get_upsamplerSchedule", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.get_instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::DynamicResolutionHandler* (*)()>(
    &::UnityEngine::Rendering::DynamicResolutionHandler::get_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1bd1534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                               "get_instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DynamicResolutionHandler::*)()>(
    &::UnityEngine::Rendering::DynamicResolutionHandler::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1bd148c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.DefaultDynamicResMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::UnityEngine::Rendering::DynamicResolutionHandler::DefaultDynamicResMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd15d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                               "DefaultDynamicResMethod", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.ProcessSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DynamicResolutionHandler::*)(
    ::UnityEngine::Rendering::GlobalDynamicResolutionSettings)>(&::UnityEngine::Rendering::DynamicResolutionHandler::ProcessSettings)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x1bd15d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "ProcessSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GlobalDynamicResolutionSettings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.GetResolvedScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rendering::DynamicResolutionHandler::*)()>(
    &::UnityEngine::Rendering::DynamicResolutionHandler::GetResolvedScale)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1bd177c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                               "GetResolvedScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.CalculateMipBias
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::DynamicResolutionHandler::*)(
    ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, bool)>(&::UnityEngine::Rendering::DynamicResolutionHandler::CalculateMipBias)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1bd17e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "CalculateMipBias", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.SetDynamicResScaler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::PerformDynamicRes*, ::UnityEngine::Rendering::DynamicResScalePolicyType)>(
    &::UnityEngine::Rendering::DynamicResolutionHandler::SetDynamicResScaler)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1bd1878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "SetDynamicResScaler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::PerformDynamicRes*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DynamicResScalePolicyType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.SetSystemDynamicResScaler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::PerformDynamicRes*, ::UnityEngine::Rendering::DynamicResScalePolicyType)>(
    &::UnityEngine::Rendering::DynamicResolutionHandler::SetSystemDynamicResScaler)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1bd18fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "SetSystemDynamicResScaler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::PerformDynamicRes*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DynamicResScalePolicyType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.SetActiveDynamicScalerSlot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::DynamicResScalerSlot)>(
    &::UnityEngine::Rendering::DynamicResolutionHandler::SetActiveDynamicScalerSlot)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1bd1984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "SetActiveDynamicScalerSlot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DynamicResScalerSlot>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.ClearSelectedCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Rendering::DynamicResolutionHandler::ClearSelectedCamera)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1bd19e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                               "ClearSelectedCamera", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.SetUpscaleFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::DynamicResUpscaleFilter)>(
    &::UnityEngine::Rendering::DynamicResolutionHandler::SetUpscaleFilter)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x1bd1a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "SetUpscaleFilter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DynamicResUpscaleFilter>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.SetCurrentCameraRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DynamicResolutionHandler::*)(bool)>(
    &::UnityEngine::Rendering::DynamicResolutionHandler::SetCurrentCameraRequest)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1bd1b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "SetCurrentCameraRequest",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.UpdateAndUseCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Camera*, ::System::Nullable_1<::UnityEngine::Rendering::GlobalDynamicResolutionSettings>,
                                                                                           ::System::Action*)>(&::UnityEngine::Rendering::DynamicResolutionHandler::UpdateAndUseCamera)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1bd1b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "UpdateAndUseCamera", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::Rendering::GlobalDynamicResolutionSettings>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DynamicResolutionHandler::*)(
    ::UnityEngine::Rendering::GlobalDynamicResolutionSettings, ::System::Action*)>(&::UnityEngine::Rendering::DynamicResolutionHandler::Update)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1bd1d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GlobalDynamicResolutionSettings>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.SoftwareDynamicResIsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::DynamicResolutionHandler::*)()>(
    &::UnityEngine::Rendering::DynamicResolutionHandler::SoftwareDynamicResIsEnabled)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1bd1fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                               "SoftwareDynamicResIsEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.HardwareDynamicResIsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::DynamicResolutionHandler::*)()>(
    &::UnityEngine::Rendering::DynamicResolutionHandler::HardwareDynamicResIsEnabled)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1bd1040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                               "HardwareDynamicResIsEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.RequestsHardwareDynamicResolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::DynamicResolutionHandler::*)()>(
    &::UnityEngine::Rendering::DynamicResolutionHandler::RequestsHardwareDynamicResolution)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1bd2014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                 "RequestsHardwareDynamicResolution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.DynamicResolutionEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::DynamicResolutionHandler::*)()>(
    &::UnityEngine::Rendering::DynamicResolutionHandler::DynamicResolutionEnabled)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1bd2034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                               "DynamicResolutionEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.ForceSoftwareFallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DynamicResolutionHandler::*)()>(
    &::UnityEngine::Rendering::DynamicResolutionHandler::ForceSoftwareFallback)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1bd207c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                               "ForceSoftwareFallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.GetScaledSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (::UnityEngine::Rendering::DynamicResolutionHandler::*)(::UnityEngine::Vector2Int)>(
    &::UnityEngine::Rendering::DynamicResolutionHandler::GetScaledSize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1bd2088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "GetScaledSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.ApplyScalesOnSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (::UnityEngine::Rendering::DynamicResolutionHandler::*)(::UnityEngine::Vector2Int)>(
    &::UnityEngine::Rendering::DynamicResolutionHandler::ApplyScalesOnSize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1bd20d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "ApplyScalesOnSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.ApplyScalesOnSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (::UnityEngine::Rendering::DynamicResolutionHandler::*)(
    ::UnityEngine::Vector2Int, ::UnityEngine::Vector2)>(&::UnityEngine::Rendering::DynamicResolutionHandler::ApplyScalesOnSize)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x1bd2100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "ApplyScalesOnSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.GetCurrentScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::DynamicResolutionHandler::*)()>(
    &::UnityEngine::Rendering::DynamicResolutionHandler::GetCurrentScale)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1bd2288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                               "GetCurrentScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.GetLastScaledSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (::UnityEngine::Rendering::DynamicResolutionHandler::*)()>(
    &::UnityEngine::Rendering::DynamicResolutionHandler::GetLastScaledSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd22a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                               "GetLastScaledSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DynamicResolutionHandler.GetLowResMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::DynamicResolutionHandler::*)(float_t)>(
    &::UnityEngine::Rendering::DynamicResolutionHandler::GetLowResMultiplier)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x1bd22ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "GetLowResMultiplier",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_Enabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Enabled;
}
constexpr bool const& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_Enabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Enabled;
}
constexpr void UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_set_m_Enabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Enabled = value;
}
constexpr bool& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_UseMipBias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseMipBias;
}
constexpr bool const& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_UseMipBias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseMipBias;
}
constexpr void UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_set_m_UseMipBias(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseMipBias = value;
}
constexpr float_t& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_MinScreenFraction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinScreenFraction;
}
constexpr float_t const& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_MinScreenFraction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinScreenFraction;
}
constexpr void UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_set_m_MinScreenFraction(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MinScreenFraction = value;
}
constexpr float_t& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_MaxScreenFraction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxScreenFraction;
}
constexpr float_t const& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_MaxScreenFraction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxScreenFraction;
}
constexpr void UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_set_m_MaxScreenFraction(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxScreenFraction = value;
}
constexpr float_t& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_CurrentFraction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentFraction;
}
constexpr float_t const& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_CurrentFraction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentFraction;
}
constexpr void UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_set_m_CurrentFraction(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentFraction = value;
}
constexpr bool& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_ForcingRes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForcingRes;
}
constexpr bool const& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_ForcingRes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForcingRes;
}
constexpr void UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_set_m_ForcingRes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ForcingRes = value;
}
constexpr bool& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_CurrentCameraRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentCameraRequest;
}
constexpr bool const& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_CurrentCameraRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentCameraRequest;
}
constexpr void UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_set_m_CurrentCameraRequest(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentCameraRequest = value;
}
constexpr float_t& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_PrevFraction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevFraction;
}
constexpr float_t const& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_PrevFraction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevFraction;
}
constexpr void UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_set_m_PrevFraction(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PrevFraction = value;
}
constexpr bool& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_ForceSoftwareFallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForceSoftwareFallback;
}
constexpr bool const& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_ForceSoftwareFallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForceSoftwareFallback;
}
constexpr void UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_set_m_ForceSoftwareFallback(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ForceSoftwareFallback = value;
}
constexpr bool& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_RunUpscalerFilterOnFullResolution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RunUpscalerFilterOnFullResolution;
}
constexpr bool const& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_RunUpscalerFilterOnFullResolution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RunUpscalerFilterOnFullResolution;
}
constexpr void UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_set_m_RunUpscalerFilterOnFullResolution(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RunUpscalerFilterOnFullResolution = value;
}
constexpr float_t& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_PrevHWScaleWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevHWScaleWidth;
}
constexpr float_t const& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_PrevHWScaleWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevHWScaleWidth;
}
constexpr void UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_set_m_PrevHWScaleWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PrevHWScaleWidth = value;
}
constexpr float_t& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_PrevHWScaleHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevHWScaleHeight;
}
constexpr float_t const& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_PrevHWScaleHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevHWScaleHeight;
}
constexpr void UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_set_m_PrevHWScaleHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PrevHWScaleHeight = value;
}
constexpr ::UnityEngine::Vector2Int& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_LastScaledSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastScaledSize;
}
constexpr ::UnityEngine::Vector2Int const& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_LastScaledSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastScaledSize;
}
constexpr void UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_set_m_LastScaledSize(::UnityEngine::Vector2Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastScaledSize = value;
}
constexpr ::UnityEngine::Vector2Int& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_cachedOriginalSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedOriginalSize;
}
constexpr ::UnityEngine::Vector2Int const& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_cachedOriginalSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedOriginalSize;
}
constexpr void UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_set_cachedOriginalSize(::UnityEngine::Vector2Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cachedOriginalSize = value;
}
constexpr ::UnityEngine::Rendering::DynamicResUpscaleFilter& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get__filter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filter_k__BackingField;
}
constexpr ::UnityEngine::Rendering::DynamicResUpscaleFilter const& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get__filter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filter_k__BackingField;
}
constexpr void UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_set__filter_k__BackingField(::UnityEngine::Rendering::DynamicResUpscaleFilter value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____filter_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2Int& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get__finalViewport_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finalViewport_k__BackingField;
}
constexpr ::UnityEngine::Vector2Int const& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get__finalViewport_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finalViewport_k__BackingField;
}
constexpr void UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_set__finalViewport_k__BackingField(::UnityEngine::Vector2Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____finalViewport_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::DynamicResolutionType& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::UnityEngine::Rendering::DynamicResolutionType const& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_set_type(::UnityEngine::Rendering::DynamicResolutionType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::UnityEngine::Rendering::GlobalDynamicResolutionSettings& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_CachedSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedSettings;
}
constexpr ::UnityEngine::Rendering::GlobalDynamicResolutionSettings const& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_CachedSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedSettings;
}
constexpr void UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_set_m_CachedSettings(::UnityEngine::Rendering::GlobalDynamicResolutionSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedSettings = value;
}
constexpr ::System::WeakReference*& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_OwnerCameraWeakRef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OwnerCameraWeakRef;
}
constexpr ::cordl_internals::to_const_pointer<::System::WeakReference*> const& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_OwnerCameraWeakRef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OwnerCameraWeakRef;
}
constexpr void UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_set_m_OwnerCameraWeakRef(::System::WeakReference* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OwnerCameraWeakRef)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_UpsamplerSchedule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpsamplerSchedule;
}
constexpr ::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType const& UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_get_m_UpsamplerSchedule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpsamplerSchedule;
}
constexpr void UnityEngine::Rendering::DynamicResolutionHandler::__cordl_internal_set_m_UpsamplerSchedule(::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpsamplerSchedule = value;
}
inline void UnityEngine::Rendering::DynamicResolutionHandler::setStaticF_s_ActiveScalerSlot(::UnityEngine::Rendering::DynamicResScalerSlot value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::DynamicResScalerSlot, "s_ActiveScalerSlot",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get>(
      std::forward<::UnityEngine::Rendering::DynamicResScalerSlot>(value));
}
inline ::UnityEngine::Rendering::DynamicResScalerSlot UnityEngine::Rendering::DynamicResolutionHandler::getStaticF_s_ActiveScalerSlot() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::DynamicResScalerSlot, "s_ActiveScalerSlot",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get>();
}
inline void UnityEngine::Rendering::DynamicResolutionHandler::setStaticF_s_ScalerContainers(
    ::ArrayW<::UnityEngine::Rendering::__DynamicResolutionHandler__ScalerContainer, ::Array<::UnityEngine::Rendering::__DynamicResolutionHandler__ScalerContainer>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::__DynamicResolutionHandler__ScalerContainer, ::Array<::UnityEngine::Rendering::__DynamicResolutionHandler__ScalerContainer>*>,
                                    "s_ScalerContainers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get>(
      std::forward<::ArrayW<::UnityEngine::Rendering::__DynamicResolutionHandler__ScalerContainer, ::Array<::UnityEngine::Rendering::__DynamicResolutionHandler__ScalerContainer>*>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::__DynamicResolutionHandler__ScalerContainer, ::Array<::UnityEngine::Rendering::__DynamicResolutionHandler__ScalerContainer>*>
UnityEngine::Rendering::DynamicResolutionHandler::getStaticF_s_ScalerContainers() {
  return ::cordl_internals::getStaticField<
      ::ArrayW<::UnityEngine::Rendering::__DynamicResolutionHandler__ScalerContainer, ::Array<::UnityEngine::Rendering::__DynamicResolutionHandler__ScalerContainer>*>, "s_ScalerContainers",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get>();
}
inline void
UnityEngine::Rendering::DynamicResolutionHandler::setStaticF_s_CameraUpscaleFilters(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::DynamicResUpscaleFilter>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::DynamicResUpscaleFilter>*, "s_CameraUpscaleFilters",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::DynamicResUpscaleFilter>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::DynamicResUpscaleFilter>* UnityEngine::Rendering::DynamicResolutionHandler::getStaticF_s_CameraUpscaleFilters() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::DynamicResUpscaleFilter>*, "s_CameraUpscaleFilters",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get>();
}
inline void
UnityEngine::Rendering::DynamicResolutionHandler::setStaticF_s_CameraInstances(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::DynamicResolutionHandler*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::DynamicResolutionHandler*>*, "s_CameraInstances",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::DynamicResolutionHandler*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::DynamicResolutionHandler*>* UnityEngine::Rendering::DynamicResolutionHandler::getStaticF_s_CameraInstances() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::DynamicResolutionHandler*>*, "s_CameraInstances",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get>();
}
inline void UnityEngine::Rendering::DynamicResolutionHandler::setStaticF_s_DefaultInstance(::UnityEngine::Rendering::DynamicResolutionHandler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::DynamicResolutionHandler*, "s_DefaultInstance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get>(
      std::forward<::UnityEngine::Rendering::DynamicResolutionHandler*>(value));
}
inline ::UnityEngine::Rendering::DynamicResolutionHandler* UnityEngine::Rendering::DynamicResolutionHandler::getStaticF_s_DefaultInstance() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::DynamicResolutionHandler*, "s_DefaultInstance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get>();
}
inline void UnityEngine::Rendering::DynamicResolutionHandler::setStaticF_s_ActiveCameraId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_ActiveCameraId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::DynamicResolutionHandler::getStaticF_s_ActiveCameraId() {
  return ::cordl_internals::getStaticField<int32_t, "s_ActiveCameraId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get>();
}
inline void UnityEngine::Rendering::DynamicResolutionHandler::setStaticF_s_ActiveInstance(::UnityEngine::Rendering::DynamicResolutionHandler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::DynamicResolutionHandler*, "s_ActiveInstance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get>(
      std::forward<::UnityEngine::Rendering::DynamicResolutionHandler*>(value));
}
inline ::UnityEngine::Rendering::DynamicResolutionHandler* UnityEngine::Rendering::DynamicResolutionHandler::getStaticF_s_ActiveInstance() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::DynamicResolutionHandler*, "s_ActiveInstance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get>();
}
inline void UnityEngine::Rendering::DynamicResolutionHandler::setStaticF_s_ActiveInstanceDirty(bool value) {
  ::cordl_internals::setStaticField<bool, "s_ActiveInstanceDirty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get>(
      std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::DynamicResolutionHandler::getStaticF_s_ActiveInstanceDirty() {
  return ::cordl_internals::getStaticField<bool, "s_ActiveInstanceDirty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get>();
}
inline void UnityEngine::Rendering::DynamicResolutionHandler::setStaticF_s_GlobalHwFraction(float_t value) {
  ::cordl_internals::setStaticField<float_t, "s_GlobalHwFraction", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get>(
      std::forward<float_t>(value));
}
inline float_t UnityEngine::Rendering::DynamicResolutionHandler::getStaticF_s_GlobalHwFraction() {
  return ::cordl_internals::getStaticField<float_t, "s_GlobalHwFraction", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get>();
}
inline void UnityEngine::Rendering::DynamicResolutionHandler::setStaticF_s_GlobalHwUpresActive(bool value) {
  ::cordl_internals::setStaticField<bool, "s_GlobalHwUpresActive", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get>(
      std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::DynamicResolutionHandler::getStaticF_s_GlobalHwUpresActive() {
  return ::cordl_internals::getStaticField<bool, "s_GlobalHwUpresActive", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get>();
}
inline void UnityEngine::Rendering::DynamicResolutionHandler::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                             "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DynamicResUpscaleFilter UnityEngine::Rendering::DynamicResolutionHandler::get_filter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                             "get_filter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DynamicResUpscaleFilter, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DynamicResolutionHandler::set_filter(::UnityEngine::Rendering::DynamicResUpscaleFilter value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "set_filter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DynamicResUpscaleFilter>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::DynamicResolutionHandler::get_finalViewport() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                             "get_finalViewport", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DynamicResolutionHandler::set_finalViewport(::UnityEngine::Vector2Int value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "set_finalViewport", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DynamicResolutionHandler::set_runUpscalerFilterOnFullResolution(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "set_runUpscalerFilterOnFullResolution",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::DynamicResolutionHandler::get_runUpscalerFilterOnFullResolution() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                               "get_runUpscalerFilterOnFullResolution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::DynamicResolutionHandler::FlushScalableBufferManagerState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                             "FlushScalableBufferManagerState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DynamicResolutionHandler* UnityEngine::Rendering::DynamicResolutionHandler::GetOrCreateDrsInstanceHandler(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "GetOrCreateDrsInstanceHandler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DynamicResolutionHandler*, false>(nullptr, ___internal_method, camera);
}
inline void UnityEngine::Rendering::DynamicResolutionHandler::set_upsamplerSchedule(::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "set_upsamplerSchedule", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType UnityEngine::Rendering::DynamicResolutionHandler::get_upsamplerSchedule() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                             "get_upsamplerSchedule", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::__DynamicResolutionHandler__UpsamplerScheduleType, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DynamicResolutionHandler* UnityEngine::Rendering::DynamicResolutionHandler::get_instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                             "get_instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DynamicResolutionHandler*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::DynamicResolutionHandler* UnityEngine::Rendering::DynamicResolutionHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::DynamicResolutionHandler*>());
}
inline void UnityEngine::Rendering::DynamicResolutionHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::DynamicResolutionHandler::DefaultDynamicResMethod() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                             "DefaultDynamicResMethod", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::DynamicResolutionHandler::ProcessSettings(::UnityEngine::Rendering::GlobalDynamicResolutionSettings settings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "ProcessSettings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GlobalDynamicResolutionSettings>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::DynamicResolutionHandler::GetResolvedScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                             "GetResolvedScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
/// @param forceApply: bool (default: false)
inline float_t UnityEngine::Rendering::DynamicResolutionHandler::CalculateMipBias(::UnityEngine::Vector2Int inputResolution, ::UnityEngine::Vector2Int outputResolution, bool forceApply) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "CalculateMipBias", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, inputResolution, outputResolution, forceApply);
}
/// @param scalerType: ::UnityEngine::Rendering::DynamicResScalePolicyType (default: static_cast<int32_t>(0x1))
inline void UnityEngine::Rendering::DynamicResolutionHandler::SetDynamicResScaler(::UnityEngine::Rendering::PerformDynamicRes* scaler, ::UnityEngine::Rendering::DynamicResScalePolicyType scalerType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "SetDynamicResScaler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::PerformDynamicRes*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DynamicResScalePolicyType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, scaler, scalerType);
}
/// @param scalerType: ::UnityEngine::Rendering::DynamicResScalePolicyType (default: static_cast<int32_t>(0x1))
inline void UnityEngine::Rendering::DynamicResolutionHandler::SetSystemDynamicResScaler(::UnityEngine::Rendering::PerformDynamicRes* scaler,
                                                                                        ::UnityEngine::Rendering::DynamicResScalePolicyType scalerType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "SetSystemDynamicResScaler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::PerformDynamicRes*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DynamicResScalePolicyType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, scaler, scalerType);
}
inline void UnityEngine::Rendering::DynamicResolutionHandler::SetActiveDynamicScalerSlot(::UnityEngine::Rendering::DynamicResScalerSlot slot) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "SetActiveDynamicScalerSlot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DynamicResScalerSlot>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, slot);
}
inline void UnityEngine::Rendering::DynamicResolutionHandler::ClearSelectedCamera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                             "ClearSelectedCamera", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::DynamicResolutionHandler::SetUpscaleFilter(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::DynamicResUpscaleFilter filter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "SetUpscaleFilter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DynamicResUpscaleFilter>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, camera, filter);
}
inline void UnityEngine::Rendering::DynamicResolutionHandler::SetCurrentCameraRequest(bool cameraRequest) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "SetCurrentCameraRequest",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cameraRequest);
}
/// @param settings: ::System::Nullable_1<::UnityEngine::Rendering::GlobalDynamicResolutionSettings> (default: {})
/// @param OnResolutionChange: ::System::Action* (default: nullptr)
inline void UnityEngine::Rendering::DynamicResolutionHandler::UpdateAndUseCamera(::UnityEngine::Camera* camera,
                                                                                 ::System::Nullable_1<::UnityEngine::Rendering::GlobalDynamicResolutionSettings> settings,
                                                                                 ::System::Action* OnResolutionChange) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "UpdateAndUseCamera", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::Rendering::GlobalDynamicResolutionSettings>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, camera, settings, OnResolutionChange);
}
/// @param OnResolutionChange: ::System::Action* (default: nullptr)
inline void UnityEngine::Rendering::DynamicResolutionHandler::Update(::UnityEngine::Rendering::GlobalDynamicResolutionSettings settings, ::System::Action* OnResolutionChange) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GlobalDynamicResolutionSettings>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings, OnResolutionChange);
}
inline bool UnityEngine::Rendering::DynamicResolutionHandler::SoftwareDynamicResIsEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                             "SoftwareDynamicResIsEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::DynamicResolutionHandler::HardwareDynamicResIsEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                             "HardwareDynamicResIsEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::DynamicResolutionHandler::RequestsHardwareDynamicResolution() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "RequestsHardwareDynamicResolution",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::DynamicResolutionHandler::DynamicResolutionEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                             "DynamicResolutionEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DynamicResolutionHandler::ForceSoftwareFallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                             "ForceSoftwareFallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::DynamicResolutionHandler::GetScaledSize(::UnityEngine::Vector2Int size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "GetScaledSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int, false>(this, ___internal_method, size);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::DynamicResolutionHandler::ApplyScalesOnSize(::UnityEngine::Vector2Int size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "ApplyScalesOnSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int, false>(this, ___internal_method, size);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::DynamicResolutionHandler::ApplyScalesOnSize(::UnityEngine::Vector2Int size, ::UnityEngine::Vector2 scales) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "ApplyScalesOnSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int, false>(this, ___internal_method, size, scales);
}
inline float_t UnityEngine::Rendering::DynamicResolutionHandler::GetCurrentScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                             "GetCurrentScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::DynamicResolutionHandler::GetLastScaledSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(),
                                                                             "GetLastScaledSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::DynamicResolutionHandler::GetLowResMultiplier(float_t targetLowRes) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DynamicResolutionHandler*>::get(), "GetLowResMultiplier",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, targetLowRes);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DynamicResolutionHandler::DynamicResolutionHandler() {}
