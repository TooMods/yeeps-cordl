#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DepthNormalOnlyPass_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderQueueRange_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.get_normalDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTextureDescriptor (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::get_normalDescriptor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29b54bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(),
                                                 "get_normalDescriptor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.set_normalDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)(::UnityEngine::RenderTextureDescriptor)>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::set_normalDescriptor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29b54e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), "set_normalDescriptor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.get_depthDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTextureDescriptor (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::get_depthDescriptor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29b5504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(),
                                                 "get_depthDescriptor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.set_depthDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)(::UnityEngine::RenderTextureDescriptor)>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::set_depthDescriptor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29b5524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), "set_depthDescriptor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.get_allocateDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::get_allocateDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29b5544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(),
                                                 "get_allocateDepth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.set_allocateDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::set_allocateDepth)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29b554c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), "set_allocateDepth",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.get_allocateNormal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::get_allocateNormal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29b5558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(),
                                                 "get_allocateNormal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.set_allocateNormal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::set_allocateNormal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29b5560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), "set_allocateNormal",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.get_shaderTagIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* (
    ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)()>(&::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::get_shaderTagIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29b556c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), "get_shaderTagIds",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.set_shaderTagIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*)>(&::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::set_shaderTagIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29b5574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), "set_shaderTagIds",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.get_depthHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::RenderTargetHandle (
    ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)()>(&::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::get_depthHandle)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x29b557c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), "get_depthHandle",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.set_depthHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)(
    ::UnityEngine::Rendering::Universal::RenderTargetHandle)>(&::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::set_depthHandle)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x29b5590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), "set_depthHandle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.get_normalHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::RenderTargetHandle (
    ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)()>(&::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::get_normalHandle)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x29b55a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), "get_normalHandle",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.set_normalHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)(
    ::UnityEngine::Rendering::Universal::RenderTargetHandle)>(&::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::set_normalHandle)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x29b55b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), "set_normalHandle",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Rendering::RenderQueueRange, ::UnityEngine::LayerMask)>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x29b55cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderQueueRange>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)(
    ::UnityEngine::RenderTextureDescriptor, ::UnityEngine::Rendering::Universal::RenderTargetHandle, ::UnityEngine::Rendering::Universal::RenderTargetHandle)>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::Setup)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x29b56fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.OnCameraSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::OnCameraSetup)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x29b5898;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::Execute)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x29b5be0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.OnCameraCleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::OnCameraCleanup)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x29b5de8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), 7));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::RenderTextureDescriptor& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get__normalDescriptor_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalDescriptor_k__BackingField;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get__normalDescriptor_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalDescriptor_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_set__normalDescriptor_k__BackingField(::UnityEngine::RenderTextureDescriptor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalDescriptor_k__BackingField = value;
}
constexpr ::UnityEngine::RenderTextureDescriptor& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get__depthDescriptor_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____depthDescriptor_k__BackingField;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get__depthDescriptor_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____depthDescriptor_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_set__depthDescriptor_k__BackingField(::UnityEngine::RenderTextureDescriptor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____depthDescriptor_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get__allocateDepth_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allocateDepth_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get__allocateDepth_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allocateDepth_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_set__allocateDepth_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allocateDepth_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get__allocateNormal_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allocateNormal_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get__allocateNormal_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allocateNormal_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_set__allocateNormal_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allocateNormal_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*&
UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get__shaderTagIds_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shaderTagIds_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*> const&
UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get__shaderTagIds_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shaderTagIds_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_set__shaderTagIds_k__BackingField(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shaderTagIds_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get__depthHandle_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____depthHandle_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get__depthHandle_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____depthHandle_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_set__depthHandle_k__BackingField(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____depthHandle_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get__normalHandle_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalHandle_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get__normalHandle_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalHandle_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_set__normalHandle_k__BackingField(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalHandle_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::FilteringSettings& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get_m_FilteringSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr ::UnityEngine::Rendering::FilteringSettings const& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get_m_FilteringSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FilteringSettings = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get_m_RendererMSAASamples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererMSAASamples;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get_m_RendererMSAASamples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererMSAASamples;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_set_m_RendererMSAASamples(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RendererMSAASamples = value;
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::setStaticF_k_DepthNormals(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*, "k_DepthNormals",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::getStaticF_k_DepthNormals() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*, "k_DepthNormals",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get>();
}
inline ::UnityEngine::RenderTextureDescriptor UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::get_normalDescriptor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(),
                                               "get_normalDescriptor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::set_normalDescriptor(::UnityEngine::RenderTextureDescriptor value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), "set_normalDescriptor",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::RenderTextureDescriptor UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::get_depthDescriptor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(),
                                               "get_depthDescriptor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::set_depthDescriptor(::UnityEngine::RenderTextureDescriptor value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), "set_depthDescriptor",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::get_allocateDepth() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), "get_allocateDepth",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::set_allocateDepth(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), "set_allocateDepth",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::get_allocateNormal() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), "get_allocateNormal",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::set_allocateNormal(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), "set_allocateNormal",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::get_shaderTagIds() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), "get_shaderTagIds",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::set_shaderTagIds(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), "set_shaderTagIds", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::RenderTargetHandle UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::get_depthHandle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), "get_depthHandle",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderTargetHandle, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::set_depthHandle(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), "set_depthHandle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::RenderTargetHandle UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::get_normalHandle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), "get_normalHandle",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderTargetHandle, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::set_normalHandle(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), "set_normalHandle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*
UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange,
                                                                           ::UnityEngine::LayerMask layerMask) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(evt, renderQueueRange, layerMask));
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                    ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderQueueRange>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, renderQueueRange, layerMask);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::Setup(::UnityEngine::RenderTextureDescriptor baseDescriptor,
                                                                                    ::UnityEngine::Rendering::Universal::RenderTargetHandle depthHandle,
                                                                                    ::UnityEngine::Rendering::Universal::RenderTargetHandle normalHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseDescriptor, depthHandle, normalHandle);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                            ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                      ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::DepthNormalOnlyPass() {}
