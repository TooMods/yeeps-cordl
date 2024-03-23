#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphPass_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__DepthAccess_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderFunc_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphContext_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphObjectPool_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool*)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.HasRenderFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::HasRenderFunc)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.get_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bc86f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "get_name",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.set_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)(::StringW)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bc86f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_name",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.get_index
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::get_index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bc8700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                 "get_index", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.set_index
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::set_index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bc8708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_index",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.get_customSampler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ProfilingSampler* (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)()>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::get_customSampler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bc8710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                 "get_customSampler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.set_customSampler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::UnityEngine::Rendering::ProfilingSampler*)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::set_customSampler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bc8718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_customSampler",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProfilingSampler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.get_enableAsyncCompute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::get_enableAsyncCompute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bc8720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                 "get_enableAsyncCompute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.set_enableAsyncCompute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::set_enableAsyncCompute)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1bc8728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_enableAsyncCompute",
                                   std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.get_allowPassCulling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::get_allowPassCulling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bc8734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                 "get_allowPassCulling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.set_allowPassCulling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::set_allowPassCulling)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1bc873c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_allowPassCulling",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.get_depthBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)()>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::get_depthBuffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1bc8748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                 "get_depthBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.set_depthBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::set_depthBuffer)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1bc8758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_depthBuffer",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.get_colorBuffers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>*> (
        ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)()>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::get_colorBuffers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bc8764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                 "get_colorBuffers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.set_colorBuffers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>*>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::set_colorBuffers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bc876c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_colorBuffers",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.get_colorBufferMaxIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::get_colorBufferMaxIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bc8774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                 "get_colorBufferMaxIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.set_colorBufferMaxIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::set_colorBufferMaxIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bc877c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_colorBufferMaxIndex",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.get_refCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::get_refCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bc8784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                 "get_refCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.set_refCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::set_refCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bc878c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_refCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.get_generateDebugData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::get_generateDebugData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bc8794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                 "get_generateDebugData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.set_generateDebugData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::set_generateDebugData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1bc879c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_generateDebugData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.get_allowRendererListCulling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::get_allowRendererListCulling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bc87a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                 "get_allowRendererListCulling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.set_allowRendererListCulling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::set_allowRendererListCulling)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1bc87b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_allowRendererListCulling",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::_ctor)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1bc87bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::Clear)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x1bc8a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "Clear",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.AddResourceWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::AddResourceWrite)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1bc6bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "AddResourceWrite",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.AddResourceRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::AddResourceRead)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1bc6b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "AddResourceRead",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.AddTransientResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::AddTransientResource)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1bc6e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "AddTransientResource",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.UseRendererList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::UseRendererList)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1bc6fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "UseRendererList",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.DependsOnRendererList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::DependsOnRendererList)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1bc8c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "DependsOnRendererList",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.EnableAsyncCompute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::EnableAsyncCompute)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1bc73a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "EnableAsyncCompute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.AllowPassCulling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::AllowPassCulling)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1bc73cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "AllowPassCulling",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.AllowRendererListCulling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::AllowRendererListCulling)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1bc7438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "AllowRendererListCulling",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.GenerateDebugData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::GenerateDebugData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1bc749c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "GenerateDebugData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.SetColorBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, int32_t)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::SetColorBuffer)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1bc6578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "SetColorBuffer",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass.SetDepthBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::SetDepthBuffer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1bc6810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "SetDepthBuffer",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__index_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index_k__BackingField;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__index_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__index_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__customSampler_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customSampler_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__customSampler_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customSampler_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__customSampler_k__BackingField(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____customSampler_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__enableAsyncCompute_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableAsyncCompute_k__BackingField;
}
constexpr bool const& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__enableAsyncCompute_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableAsyncCompute_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__enableAsyncCompute_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enableAsyncCompute_k__BackingField = value;
}
constexpr bool& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__allowPassCulling_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowPassCulling_k__BackingField;
}
constexpr bool const& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__allowPassCulling_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowPassCulling_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__allowPassCulling_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowPassCulling_k__BackingField = value;
}
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__depthBuffer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____depthBuffer_k__BackingField;
}
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__depthBuffer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____depthBuffer_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__depthBuffer_k__BackingField(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____depthBuffer_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>*>&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__colorBuffers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBuffers_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__colorBuffers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBuffers_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__colorBuffers_k__BackingField(
    ::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorBuffers_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__colorBufferMaxIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBufferMaxIndex_k__BackingField;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__colorBufferMaxIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBufferMaxIndex_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__colorBufferMaxIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorBufferMaxIndex_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__refCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refCount_k__BackingField;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__refCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refCount_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__refCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____refCount_k__BackingField = value;
}
constexpr bool& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__generateDebugData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generateDebugData_k__BackingField;
}
constexpr bool const& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__generateDebugData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generateDebugData_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__generateDebugData_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____generateDebugData_k__BackingField = value;
}
constexpr bool& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__allowRendererListCulling_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowRendererListCulling_k__BackingField;
}
constexpr bool const& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__allowRendererListCulling_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowRendererListCulling_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__allowRendererListCulling_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowRendererListCulling_k__BackingField = value;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*,
                   ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*>*>&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_resourceReadLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceReadLists;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*,
                   ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_resourceReadLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceReadLists;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set_resourceReadLists(
    ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*,
             ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resourceReadLists)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*,
                   ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*>*>&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_resourceWriteLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceWriteLists;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*,
                   ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_resourceWriteLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceWriteLists;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set_resourceWriteLists(
    ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*,
             ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resourceWriteLists)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*,
                   ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*>*>&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_transientResourceList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transientResourceList;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*,
                   ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_transientResourceList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transientResourceList;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set_transientResourceList(
    ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*,
             ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___transientResourceList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>*&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_usedRendererListList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usedRendererListList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_usedRendererListList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usedRendererListList;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set_usedRendererListList(
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___usedRendererListList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>*&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_dependsOnRendererListList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dependsOnRendererListList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_dependsOnRendererListList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dependsOnRendererListList;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set_dependsOnRendererListList(
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dependsOnRendererListList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename PassData>
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>* UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::GetExecuteDelegate() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "GetExecuteDelegate",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PassData>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PassData>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>*, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::Execute(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* renderGraphContext) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraphContext);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::Release(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool* pool) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pool);
}
inline bool UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::HasRenderFunc() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::get_name() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "get_name",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::set_name(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_name",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::get_index() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "get_index",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::set_index(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_index",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::get_customSampler() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                               "get_customSampler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProfilingSampler*, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::set_customSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_customSampler",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProfilingSampler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::get_enableAsyncCompute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                               "get_enableAsyncCompute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::set_enableAsyncCompute(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_enableAsyncCompute",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::get_allowPassCulling() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                               "get_allowPassCulling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::set_allowPassCulling(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_allowPassCulling",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::get_depthBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                               "get_depthBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::set_depthBuffer(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_depthBuffer",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>*>
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::get_colorBuffers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                               "get_colorBuffers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>*>, false>(
      this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::set_colorBuffers(
    ::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_colorBuffers",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::get_colorBufferMaxIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                               "get_colorBufferMaxIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::set_colorBufferMaxIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_colorBufferMaxIndex",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::get_refCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                               "get_refCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::set_refCount(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_refCount",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::get_generateDebugData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                               "get_generateDebugData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::set_generateDebugData(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_generateDebugData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::get_allowRendererListCulling() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                               "get_allowRendererListCulling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::set_allowRendererListCulling(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_allowRendererListCulling",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>());
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::AddResourceWrite(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "AddResourceWrite",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::AddResourceRead(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "AddResourceRead",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::AddTransientResource(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "AddTransientResource",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::UseRendererList(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle rendererList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "UseRendererList",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rendererList);
}
inline void
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::DependsOnRendererList(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle rendererList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "DependsOnRendererList",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rendererList);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::EnableAsyncCompute(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "EnableAsyncCompute",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::AllowPassCulling(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "AllowPassCulling",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::AllowRendererListCulling(bool value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "AllowRendererListCulling",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::GenerateDebugData(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "GenerateDebugData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::SetColorBuffer(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle resource, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "SetColorBuffer",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resource, index);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::SetDepthBuffer(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle resource,
                                                                                                     ::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess flags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "SetDepthBuffer",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resource, flags);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass::RenderGraphPass() {}
