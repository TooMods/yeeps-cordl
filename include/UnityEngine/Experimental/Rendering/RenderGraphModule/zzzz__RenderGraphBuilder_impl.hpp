#pragma once
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphBuilder_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__ComputeBufferDesc_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__ComputeBufferHandle_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__DepthAccess_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderFunc_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphPass_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphResourceRegistry_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__TextureDesc_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder.UseColorBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>, int32_t)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::UseColorBuffer)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1bc6480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "UseColorBuffer",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder.UseDepthBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::*)(
        ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>, ::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess)>(
        &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::UseDepthBuffer)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1bc663c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "UseDepthBuffer",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder.ReadTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::ReadTexture)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x1bc6860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "ReadTexture",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder.WriteTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::WriteTexture)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1bc67d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "WriteTexture",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder.ReadWriteTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::ReadWriteTexture)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1bc6cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "ReadWriteTexture",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder.CreateTransientTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::CreateTransientTexture)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1bc6d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "CreateTransientTexture",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder.CreateTransientTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::CreateTransientTexture)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1bc6f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "CreateTransientTexture",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder.UseRendererList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::UseRendererList)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1bc6fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "UseRendererList",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder.ReadComputeBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::ReadComputeBuffer)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1bc7074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "ReadComputeBuffer",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder.WriteComputeBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::WriteComputeBuffer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1bc7098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "WriteComputeBuffer",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder.CreateTransientComputeBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::CreateTransientComputeBuffer)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1bc70d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "CreateTransientComputeBuffer",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder.CreateTransientComputeBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::CreateTransientComputeBuffer)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1bc7200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "CreateTransientComputeBuffer",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder.EnableAsyncCompute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::EnableAsyncCompute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1bc7380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "EnableAsyncCompute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder.AllowPassCulling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::AllowPassCulling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1bc73ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "AllowPassCulling",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bc73d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(),
                                                 "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder.AllowRendererListCulling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::AllowRendererListCulling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1bc7418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "AllowRendererListCulling",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder.DependsOn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::DependsOn)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1bc7444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "DependsOn",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*,
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1bc746c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1bc73e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "Dispose",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder.CheckResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::*)(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>, bool)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::CheckResource)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1bc64c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "CheckResource",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder.GenerateDebugData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::GenerateDebugData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1bc747c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "GenerateDebugData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::UseColorBuffer(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle> input, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "UseColorBuffer",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, false>(this, ___internal_method, input, index);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::UseDepthBuffer(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle> input,
                                                                                            ::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess flags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "UseDepthBuffer",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, false>(this, ___internal_method, input, flags);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::ReadTexture(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle> input) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "ReadTexture",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, false>(this, ___internal_method, input);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::WriteTexture(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle> input) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "WriteTexture",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, false>(this, ___internal_method, input);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::ReadWriteTexture(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle> input) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "ReadWriteTexture",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, false>(this, ___internal_method, input);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::CreateTransientTexture(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc> desc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "CreateTransientTexture",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, false>(this, ___internal_method, desc);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::CreateTransientTexture(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle> texture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "CreateTransientTexture",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, false>(this, ___internal_method, texture);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::UseRendererList(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle> input) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "UseRendererList",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle, false>(this, ___internal_method, input);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::ReadComputeBuffer(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle> input) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "ReadComputeBuffer",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle, false>(this, ___internal_method, input);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::WriteComputeBuffer(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle> input) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "WriteComputeBuffer",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle, false>(this, ___internal_method, input);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::CreateTransientComputeBuffer(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc> desc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "CreateTransientComputeBuffer",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle, false>(this, ___internal_method, desc);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::CreateTransientComputeBuffer(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle> computebuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "CreateTransientComputeBuffer",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle, false>(this, ___internal_method, computebuffer);
}
template <typename PassData>
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::SetRenderFunc(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>* renderFunc) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "SetRenderFunc",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PassData>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PassData>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderFunc);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::EnableAsyncCompute(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "EnableAsyncCompute",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::AllowPassCulling(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "AllowPassCulling",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::AllowRendererListCulling(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "AllowRendererListCulling",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::DependsOn(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle> input) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "DependsOn",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle, false>(this, ___internal_method, input);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::_ctor(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* renderPass,
                                                                                               ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
                                                                                               ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* renderGraph) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderPass, resources, renderGraph);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
/// @param dontCheckTransientReadWrite: bool (default: false)
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::CheckResource(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> res,
                                                                                                       bool dontCheckTransientReadWrite) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "CheckResource",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res, dontCheckTransientReadWrite);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::GenerateDebugData(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>::get(), "GenerateDebugData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_RenderPass", ty: "::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "m_Resources", ty: "::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_RenderGraph", ty:
// "::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_Disposed", ty: "bool", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::RenderGraphBuilder(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* m_RenderPass, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* m_Resources,
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* m_RenderGraph, bool m_Disposed) noexcept {
  this->m_RenderPass = m_RenderPass;
  this->m_Resources = m_Resources;
  this->m_RenderGraph = m_RenderGraph;
  this->m_Disposed = m_Disposed;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder::RenderGraphBuilder() {}
