#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeBrickPool_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeSHBands_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeTextureMemoryBudget_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeBrickPool_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeBrickPool_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeReferenceVolume_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeSHBands_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeTextureMemoryBudget_def.hpp"
#include "UnityEngine/Rendering/zzzz__SphericalHarmonicsL2_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Texture3D_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc.flattenIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc::*)(int32_t, int32_t)>(
    &::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc::flattenIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23be31c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>::get(), "flattenIndex",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc::flattenIndex(int32_t sx, int32_t sy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>::get(), "flattenIndex",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, sx, sy);
}
// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "z", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc::__ProbeBrickPool__BrickChunkAlloc(int32_t x, int32_t y, int32_t z) noexcept {
  this->x = x;
  this->y = y;
  this->z = z;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc::__ProbeBrickPool__BrickChunkAlloc() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation::*)()>(
    &::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation::Cleanup)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x23bf1e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation>::get(), "Cleanup",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation::Cleanup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation>::get(), "Cleanup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "TexL0_L1rx", ty: "::UnityW<::UnityEngine::Texture3D>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "TexL1_G_ry", ty:
// "::UnityW<::UnityEngine::Texture3D>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "TexL1_B_rz", ty: "::UnityW<::UnityEngine::Texture3D>", modifiers: "", def_value: Some("nullptr")
// }, CppParam { name: "TexL2_0", ty: "::UnityW<::UnityEngine::Texture3D>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "TexL2_1", ty: "::UnityW<::UnityEngine::Texture3D>",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "TexL2_2", ty: "::UnityW<::UnityEngine::Texture3D>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "TexL2_3", ty:
// "::UnityW<::UnityEngine::Texture3D>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation::__ProbeBrickPool__DataLocation(
    ::UnityW<::UnityEngine::Texture3D> TexL0_L1rx, ::UnityW<::UnityEngine::Texture3D> TexL1_G_ry, ::UnityW<::UnityEngine::Texture3D> TexL1_B_rz, ::UnityW<::UnityEngine::Texture3D> TexL2_0,
    ::UnityW<::UnityEngine::Texture3D> TexL2_1, ::UnityW<::UnityEngine::Texture3D> TexL2_2, ::UnityW<::UnityEngine::Texture3D> TexL2_3, int32_t width, int32_t height, int32_t depth) noexcept {
  this->TexL0_L1rx = TexL0_L1rx;
  this->TexL1_G_ry = TexL1_G_ry;
  this->TexL1_B_rz = TexL1_B_rz;
  this->TexL2_0 = TexL2_0;
  this->TexL2_1 = TexL2_1;
  this->TexL2_2 = TexL2_2;
  this->TexL2_3 = TexL2_3;
  this->width = width;
  this->height = height;
  this->depth = depth;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation::__ProbeBrickPool__DataLocation() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickPool.get_estimatedVMemCost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::ProbeBrickPool::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeBrickPool::get_estimatedVMemCost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23becf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(),
                                                                               "get_estimatedVMemCost", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickPool.set_estimatedVMemCost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeBrickPool::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::ProbeBrickPool::set_estimatedVMemCost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23becfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(), "set_estimatedVMemCost",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickPool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeBrickPool::*)(
    int32_t, ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget, ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands)>(
    &::UnityEngine::Experimental::Rendering::ProbeBrickPool::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x23bed04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickPool.EnsureTextureValidity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeBrickPool::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeBrickPool::EnsureTextureValidity)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x23bf118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(),
                                                                               "EnsureTextureValidity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickPool.GetChunkSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::ProbeBrickPool::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeBrickPool::GetChunkSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23bf298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(),
                                                                               "GetChunkSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickPool.GetChunkSizeInProbeCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::ProbeBrickPool::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeBrickPool::GetChunkSizeInProbeCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23bf2a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(),
                                                                               "GetChunkSizeInProbeCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickPool.GetPoolWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::ProbeBrickPool::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeBrickPool::GetPoolWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23bf2ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(),
                                                                               "GetPoolWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickPool.GetPoolHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::ProbeBrickPool::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeBrickPool::GetPoolHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23bf2b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(),
                                                                               "GetPoolHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickPool.GetPoolDimensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3Int (::UnityEngine::Experimental::Rendering::ProbeBrickPool::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeBrickPool::GetPoolDimensions)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23bf2bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(),
                                                                               "GetPoolDimensions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickPool.GetRuntimeResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeBrickPool::*)(
    ByRef<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources>)>(&::UnityEngine::Experimental::Rendering::ProbeBrickPool::GetRuntimeResources)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23bf2c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(), "GetRuntimeResources", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickPool.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeBrickPool::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeBrickPool::Clear)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23bf2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(),
                                                                               "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickPool.Allocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeBrickPool::*)(
    int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*)>(&::UnityEngine::Experimental::Rendering::ProbeBrickPool::Allocate)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x23bf348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(), "Allocate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickPool.Deallocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeBrickPool::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*)>(&::UnityEngine::Experimental::Rendering::ProbeBrickPool::Deallocate)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x23bf538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(), "Deallocate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickPool.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeBrickPool::*)(
    ::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*,
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*, ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands)>(
    &::UnityEngine::Experimental::Rendering::ProbeBrickPool::Update)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x23bf6a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickPool.ProbeCountToDataLocSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3Int (*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::ProbeBrickPool::ProbeCountToDataLocSize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23bf9c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(), "ProbeCountToDataLocSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickPool.CreateDataLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation (*)(
    int32_t, bool, ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands, ByRef<int32_t>)>(&::UnityEngine::Experimental::Rendering::ProbeBrickPool::CreateDataLocation)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x23bee0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(), "CreateDataLocation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickPool.SetPixel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>, int32_t, int32_t, int32_t, int32_t,
                                                                                           int32_t, ::UnityEngine::Color)>(&::UnityEngine::Experimental::Rendering::ProbeBrickPool::SetPixel)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x23bfa38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(), "SetPixel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickPool.FillDataLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ByRef<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation>, ::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2, ::Array<::UnityEngine::Rendering::SphericalHarmonicsL2>*>,
    ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands)>(&::UnityEngine::Experimental::Rendering::ProbeBrickPool::FillDataLocation)> {
  constexpr static std::size_t size = 0x8a0;
  constexpr static std::size_t addrs = 0x23bfa78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(), "FillDataLocation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2, ::Array<::UnityEngine::Rendering::SphericalHarmonicsL2>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickPool.DerivePoolSizeFromBudget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeBrickPool::*)(
    int32_t, ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget, ByRef<int32_t>, ByRef<int32_t>, ByRef<int32_t>)>(
    &::UnityEngine::Experimental::Rendering::ProbeBrickPool::DerivePoolSizeFromBudget)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23bedf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(), "DerivePoolSizeFromBudget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeBrickPool.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeBrickPool::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeBrickPool::Cleanup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c0318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(),
                                                                               "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Experimental::Rendering::ProbeBrickPool::__cordl_internal_get__estimatedVMemCost_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____estimatedVMemCost_k__BackingField;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::ProbeBrickPool::__cordl_internal_get__estimatedVMemCost_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____estimatedVMemCost_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeBrickPool::__cordl_internal_set__estimatedVMemCost_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____estimatedVMemCost_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Experimental::Rendering::ProbeBrickPool::__cordl_internal_get_m_AllocationSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllocationSize;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::ProbeBrickPool::__cordl_internal_get_m_AllocationSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllocationSize;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeBrickPool::__cordl_internal_set_m_AllocationSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllocationSize = value;
}
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget& UnityEngine::Experimental::Rendering::ProbeBrickPool::__cordl_internal_get_m_MemoryBudget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MemoryBudget;
}
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget const& UnityEngine::Experimental::Rendering::ProbeBrickPool::__cordl_internal_get_m_MemoryBudget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MemoryBudget;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeBrickPool::__cordl_internal_set_m_MemoryBudget(::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MemoryBudget = value;
}
constexpr ::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation& UnityEngine::Experimental::Rendering::ProbeBrickPool::__cordl_internal_get_m_Pool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pool;
}
constexpr ::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation const& UnityEngine::Experimental::Rendering::ProbeBrickPool::__cordl_internal_get_m_Pool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pool;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeBrickPool::__cordl_internal_set_m_Pool(::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Pool = value;
}
constexpr ::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc& UnityEngine::Experimental::Rendering::ProbeBrickPool::__cordl_internal_get_m_NextFreeChunk() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextFreeChunk;
}
constexpr ::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc const& UnityEngine::Experimental::Rendering::ProbeBrickPool::__cordl_internal_get_m_NextFreeChunk() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextFreeChunk;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeBrickPool::__cordl_internal_set_m_NextFreeChunk(::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NextFreeChunk = value;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*&
UnityEngine::Experimental::Rendering::ProbeBrickPool::__cordl_internal_get_m_FreeList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreeList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*> const&
UnityEngine::Experimental::Rendering::ProbeBrickPool::__cordl_internal_get_m_FreeList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreeList;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeBrickPool::__cordl_internal_set_m_FreeList(
    ::System::Collections::Generic::Stack_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FreeList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands& UnityEngine::Experimental::Rendering::ProbeBrickPool::__cordl_internal_get_m_SHBands() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SHBands;
}
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands const& UnityEngine::Experimental::Rendering::ProbeBrickPool::__cordl_internal_get_m_SHBands() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SHBands;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeBrickPool::__cordl_internal_set_m_SHBands(::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SHBands = value;
}
inline int32_t UnityEngine::Experimental::Rendering::ProbeBrickPool::get_estimatedVMemCost() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(),
                                                                             "get_estimatedVMemCost", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeBrickPool::set_estimatedVMemCost(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(), "set_estimatedVMemCost",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Experimental::Rendering::ProbeBrickPool*
UnityEngine::Experimental::Rendering::ProbeBrickPool::New_ctor(int32_t allocationSize, ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget,
                                                               ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands shBands) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>(allocationSize, memoryBudget, shBands));
}
inline void UnityEngine::Experimental::Rendering::ProbeBrickPool::_ctor(int32_t allocationSize, ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget,
                                                                        ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands shBands) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, allocationSize, memoryBudget, shBands);
}
inline void UnityEngine::Experimental::Rendering::ProbeBrickPool::EnsureTextureValidity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(),
                                                                             "EnsureTextureValidity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Experimental::Rendering::ProbeBrickPool::GetChunkSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(),
                                                                             "GetChunkSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Experimental::Rendering::ProbeBrickPool::GetChunkSizeInProbeCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(),
                                                                             "GetChunkSizeInProbeCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Experimental::Rendering::ProbeBrickPool::GetPoolWidth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(),
                                                                             "GetPoolWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Experimental::Rendering::ProbeBrickPool::GetPoolHeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(),
                                                                             "GetPoolHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3Int UnityEngine::Experimental::Rendering::ProbeBrickPool::GetPoolDimensions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(),
                                                                             "GetPoolDimensions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeBrickPool::GetRuntimeResources(ByRef<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources> rr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(), "GetRuntimeResources", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rr);
}
inline void UnityEngine::Experimental::Rendering::ProbeBrickPool::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(),
                                                                             "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
UnityEngine::Experimental::Rendering::ProbeBrickPool::Allocate(int32_t numberOfBrickChunks,
                                                               ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>* outAllocations) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(), "Allocate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numberOfBrickChunks, outAllocations);
}
inline void
UnityEngine::Experimental::Rendering::ProbeBrickPool::Deallocate(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>* allocations) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(), "Deallocate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, allocations);
}
inline void
UnityEngine::Experimental::Rendering::ProbeBrickPool::Update(::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation source,
                                                             ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>* srcLocations,
                                                             ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>* dstLocations,
                                                             ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands bands) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, srcLocations, dstLocations, bands);
}
inline ::UnityEngine::Vector3Int UnityEngine::Experimental::Rendering::ProbeBrickPool::ProbeCountToDataLocSize(int32_t numProbes) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(), "ProbeCountToDataLocSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int, false>(nullptr, ___internal_method, numProbes);
}
inline ::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation
UnityEngine::Experimental::Rendering::ProbeBrickPool::CreateDataLocation(int32_t numProbes, bool compressed, ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands bands,
                                                                         ByRef<int32_t> allocatedBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(), "CreateDataLocation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation, false>(nullptr, ___internal_method, numProbes, compressed, bands, allocatedBytes);
}
inline void UnityEngine::Experimental::Rendering::ProbeBrickPool::SetPixel(ByRef<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>> data, int32_t x, int32_t y, int32_t z,
                                                                           int32_t dataLocWidth, int32_t dataLocHeight, ::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(), "SetPixel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, x, y, z, dataLocWidth, dataLocHeight, value);
}
inline void
UnityEngine::Experimental::Rendering::ProbeBrickPool::FillDataLocation(ByRef<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation> loc,
                                                                       ::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2, ::Array<::UnityEngine::Rendering::SphericalHarmonicsL2>*> shl2,
                                                                       ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands bands) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(), "FillDataLocation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2, ::Array<::UnityEngine::Rendering::SphericalHarmonicsL2>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, loc, shl2, bands);
}
inline void UnityEngine::Experimental::Rendering::ProbeBrickPool::DerivePoolSizeFromBudget(int32_t allocationSize, ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget,
                                                                                           ByRef<int32_t> width, ByRef<int32_t> height, ByRef<int32_t> depth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(), "DerivePoolSizeFromBudget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, allocationSize, memoryBudget, width, height, depth);
}
inline void UnityEngine::Experimental::Rendering::ProbeBrickPool::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeBrickPool*>::get(),
                                                                             "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::ProbeBrickPool::ProbeBrickPool() {}
