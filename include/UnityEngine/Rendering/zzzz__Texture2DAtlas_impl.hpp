#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__Texture2DAtlas_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__AtlasAllocator_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__Texture2DAtlas_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::__Texture2DAtlas__BlitType::__Texture2DAtlas__BlitType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__Texture2DAtlas__BlitType::__Texture2DAtlas__BlitType() {}
constexpr ::UnityEngine::Rendering::__Texture2DAtlas__BlitType UnityEngine::Rendering::__Texture2DAtlas__BlitType::Default{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::__Texture2DAtlas__BlitType UnityEngine::Rendering::__Texture2DAtlas__BlitType::CubeTo2DOctahedral{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::__Texture2DAtlas__BlitType UnityEngine::Rendering::__Texture2DAtlas__BlitType::SingleChannel{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::__Texture2DAtlas__BlitType UnityEngine::Rendering::__Texture2DAtlas__BlitType::CubeTo2DOctahedralSingleChannel{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.get_maxMipLevelPadding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::Texture2DAtlas::get_maxMipLevelPadding)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1a0bb30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(),
                                                                               "get_maxMipLevelPadding", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.get_AtlasTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Texture2DAtlas::*)()>(
    &::UnityEngine::Rendering::Texture2DAtlas::get_AtlasTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1a0bb88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(),
                                                                               "get_AtlasTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Texture2DAtlas::*)(
    int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, bool, ::StringW, bool)>(&::UnityEngine::Rendering::Texture2DAtlas::_ctor)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x1a06094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FilterMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Texture2DAtlas::*)()>(&::UnityEngine::Rendering::Texture2DAtlas::Release)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1a0bb90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "Release",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.ResetAllocator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Texture2DAtlas::*)()>(&::UnityEngine::Rendering::Texture2DAtlas::ResetAllocator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1a07b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(),
                                                                               "ResetAllocator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.ClearTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Texture2DAtlas::ClearTarget)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x1a0bc04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "ClearTarget", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.GetTextureMipmapCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Texture2DAtlas::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::Texture2DAtlas::GetTextureMipmapCount)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1a06858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "GetTextureMipmapCount", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.Is2D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Texture*)>(
    &::UnityEngine::Rendering::Texture2DAtlas::Is2D)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1a06a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "Is2D", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.IsSingleChannelBlit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Texture*, ::UnityEngine::Texture*)>(
    &::UnityEngine::Rendering::Texture2DAtlas::IsSingleChannelBlit)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x1a0bdc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "IsSingleChannelBlit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.Blit2DTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Texture2DAtlas::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4, ::UnityEngine::Texture*, ::UnityEngine::Vector4, bool, ::UnityEngine::Rendering::__Texture2DAtlas__BlitType)>(
    &::UnityEngine::Rendering::Texture2DAtlas::Blit2DTexture)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x1a0c004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "Blit2DTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__Texture2DAtlas__BlitType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.MarkGPUTextureValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Texture2DAtlas::*)(int32_t, bool)>(
    &::UnityEngine::Rendering::Texture2DAtlas::MarkGPUTextureValid)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1a06af0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "MarkGPUTextureValid", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.MarkGPUTextureInvalid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Texture2DAtlas::*)(int32_t)>(
    &::UnityEngine::Rendering::Texture2DAtlas::MarkGPUTextureInvalid)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1a0c2a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "MarkGPUTextureInvalid",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.BlitTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Texture2DAtlas::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4, ::UnityEngine::Texture*, ::UnityEngine::Vector4, bool, int32_t)>(&::UnityEngine::Rendering::Texture2DAtlas::BlitTexture)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1a0c2fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.BlitOctahedralTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4, ::UnityEngine::Texture*, ::UnityEngine::Vector4, bool, int32_t)>(
        &::UnityEngine::Rendering::Texture2DAtlas::BlitOctahedralTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1a0c49c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.BlitCubeTexture2D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Texture2DAtlas::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4, ::UnityEngine::Texture*, bool, int32_t)>(&::UnityEngine::Rendering::Texture2DAtlas::BlitCubeTexture2D)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x1a0c4ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.AllocateTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Vector4>, ::UnityEngine::Texture*, int32_t, int32_t, int32_t)>(&::UnityEngine::Rendering::Texture2DAtlas::AllocateTexture)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x1a07100;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.AllocateTextureWithoutBlit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(
    ::UnityEngine::Texture*, int32_t, int32_t, ByRef<::UnityEngine::Vector4>)>(&::UnityEngine::Rendering::Texture2DAtlas::AllocateTextureWithoutBlit)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1a0c630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "AllocateTextureWithoutBlit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.AllocateTextureWithoutBlit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(int32_t, int32_t, int32_t, ByRef<::UnityEngine::Vector4>)>(
    &::UnityEngine::Rendering::Texture2DAtlas::AllocateTextureWithoutBlit)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x1a0c68c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.GetTextureHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Texture*, ::UnityEngine::Texture*)>(
    &::UnityEngine::Rendering::Texture2DAtlas::GetTextureHash)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1a0c818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "GetTextureHash", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.GetTextureID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Texture*)>(
    &::UnityEngine::Rendering::Texture2DAtlas::GetTextureID)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1a073c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "GetTextureID", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.GetTextureID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Texture*, ::UnityEngine::Texture*)>(
    &::UnityEngine::Rendering::Texture2DAtlas::GetTextureID)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1a07534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "GetTextureID", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.IsCached
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(
    ByRef<::UnityEngine::Vector4>, ::UnityEngine::Texture*, ::UnityEngine::Texture*)>(&::UnityEngine::Rendering::Texture2DAtlas::IsCached)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1a0c898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "IsCached", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.IsCached
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(ByRef<::UnityEngine::Vector4>, ::UnityEngine::Texture*)>(
    &::UnityEngine::Rendering::Texture2DAtlas::IsCached)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1a0c8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "IsCached", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.IsCached
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(ByRef<::UnityEngine::Vector4>, int32_t)>(
    &::UnityEngine::Rendering::Texture2DAtlas::IsCached)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1a075f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "IsCached", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.GetCachedTextureSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (::UnityEngine::Rendering::Texture2DAtlas::*)(int32_t)>(
    &::UnityEngine::Rendering::Texture2DAtlas::GetCachedTextureSize)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1a0757c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "GetCachedTextureSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.NeedsUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Texture*, bool)>(
    &::UnityEngine::Rendering::Texture2DAtlas::NeedsUpdate)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1a0c908;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.NeedsUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Texture*, ::UnityEngine::Texture*, bool)>(
    &::UnityEngine::Rendering::Texture2DAtlas::NeedsUpdate)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x1a0cb68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.AddTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Vector4>, ::UnityEngine::Texture*)>(&::UnityEngine::Rendering::Texture2DAtlas::AddTexture)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1a0cf68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.UpdateTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ByRef<::UnityEngine::Vector4>, ::UnityEngine::Vector4, bool, bool)>(
    &::UnityEngine::Rendering::Texture2DAtlas::UpdateTexture)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1a0d008;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.UpdateTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ByRef<::UnityEngine::Vector4>, bool, bool)>(&::UnityEngine::Rendering::Texture2DAtlas::UpdateTexture)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1a0d188;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DAtlas.EnsureTextureSlot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Texture2DAtlas::*)(
    ByRef<bool>, ByRef<::UnityEngine::Vector4>, int32_t, int32_t, int32_t)>(&::UnityEngine::Rendering::Texture2DAtlas::EnsureTextureSlot)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1a0d238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "EnsureTextureSlot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_AtlasTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasTexture;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::RTHandle*> const& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_AtlasTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasTexture;
}
constexpr void UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_set_m_AtlasTexture(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AtlasTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_Width() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Width;
}
constexpr int32_t const& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_Width() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Width;
}
constexpr void UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_set_m_Width(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Width = value;
}
constexpr int32_t& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_Height() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Height;
}
constexpr int32_t const& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_Height() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Height;
}
constexpr void UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_set_m_Height(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Height = value;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_Format() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Format;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_Format() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Format;
}
constexpr void UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_set_m_Format(::UnityEngine::Experimental::Rendering::GraphicsFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Format = value;
}
constexpr bool& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_UseMipMaps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseMipMaps;
}
constexpr bool const& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_UseMipMaps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseMipMaps;
}
constexpr void UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_set_m_UseMipMaps(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseMipMaps = value;
}
constexpr bool& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_IsAtlasTextureOwner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsAtlasTextureOwner;
}
constexpr bool const& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_IsAtlasTextureOwner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsAtlasTextureOwner;
}
constexpr void UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_set_m_IsAtlasTextureOwner(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsAtlasTextureOwner = value;
}
constexpr ::UnityEngine::Rendering::AtlasAllocator*& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_AtlasAllocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasAllocator;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::AtlasAllocator*> const& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_AtlasAllocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasAllocator;
}
constexpr void UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_set_m_AtlasAllocator(::UnityEngine::Rendering::AtlasAllocator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AtlasAllocator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector2Int>>*&
UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_AllocationCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllocationCache;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector2Int>>*> const&
UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_AllocationCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllocationCache;
}
constexpr void UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_set_m_AllocationCache(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector2Int>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AllocationCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_IsGPUTextureUpToDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsGPUTextureUpToDate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*> const&
UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_IsGPUTextureUpToDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsGPUTextureUpToDate;
}
constexpr void UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_set_m_IsGPUTextureUpToDate(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_IsGPUTextureUpToDate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_TextureHashes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureHashes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*> const&
UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_get_m_TextureHashes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureHashes;
}
constexpr void UnityEngine::Rendering::Texture2DAtlas::__cordl_internal_set_m_TextureHashes(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TextureHashes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Texture2DAtlas::setStaticF_fullScaleOffset(::UnityEngine::Vector4 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector4, "fullScaleOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get>(
      std::forward<::UnityEngine::Vector4>(value));
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Texture2DAtlas::getStaticF_fullScaleOffset() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "fullScaleOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get>();
}
inline void UnityEngine::Rendering::Texture2DAtlas::setStaticF_s_MaxMipLevelPadding(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_MaxMipLevelPadding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Texture2DAtlas::getStaticF_s_MaxMipLevelPadding() {
  return ::cordl_internals::getStaticField<int32_t, "s_MaxMipLevelPadding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get>();
}
inline int32_t UnityEngine::Rendering::Texture2DAtlas::get_maxMipLevelPadding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(),
                                                                             "get_maxMipLevelPadding", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Texture2DAtlas::get_AtlasTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(),
                                                                             "get_AtlasTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(this, ___internal_method);
}
/// @param filterMode: ::UnityEngine::FilterMode (default: static_cast<int32_t>(0x0))
/// @param powerOfTwoPadding: bool (default: false)
/// @param name: ::StringW (default: u"")
/// @param useMipMap: bool (default: true)
inline ::UnityEngine::Rendering::Texture2DAtlas* UnityEngine::Rendering::Texture2DAtlas::New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                                                  ::UnityEngine::FilterMode filterMode, bool powerOfTwoPadding, ::StringW name, bool useMipMap) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Texture2DAtlas*>(width, height, format, filterMode, powerOfTwoPadding, name, useMipMap));
}
/// @param filterMode: ::UnityEngine::FilterMode (default: static_cast<int32_t>(0x0))
/// @param powerOfTwoPadding: bool (default: false)
/// @param name: ::StringW (default: u"")
/// @param useMipMap: bool (default: true)
inline void UnityEngine::Rendering::Texture2DAtlas::_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::FilterMode filterMode,
                                                          bool powerOfTwoPadding, ::StringW name, bool useMipMap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FilterMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height, format, filterMode, powerOfTwoPadding, name, useMipMap);
}
inline void UnityEngine::Rendering::Texture2DAtlas::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "Release",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Texture2DAtlas::ResetAllocator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "ResetAllocator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Texture2DAtlas::ClearTarget(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "ClearTarget", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline int32_t UnityEngine::Rendering::Texture2DAtlas::GetTextureMipmapCount(int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "GetTextureMipmapCount", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, width, height);
}
inline bool UnityEngine::Rendering::Texture2DAtlas::Is2D(::UnityEngine::Texture* texture) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "Is2D", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, texture);
}
inline bool UnityEngine::Rendering::Texture2DAtlas::IsSingleChannelBlit(::UnityEngine::Texture* source, ::UnityEngine::Texture* destination) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "IsSingleChannelBlit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, source, destination);
}
inline void UnityEngine::Rendering::Texture2DAtlas::Blit2DTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture,
                                                                  ::UnityEngine::Vector4 sourceScaleOffset, bool blitMips, ::UnityEngine::Rendering::__Texture2DAtlas__BlitType blitType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "Blit2DTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__Texture2DAtlas__BlitType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, scaleOffset, texture, sourceScaleOffset, blitMips, blitType);
}
/// @param mipAreValid: bool (default: false)
inline void UnityEngine::Rendering::Texture2DAtlas::MarkGPUTextureValid(int32_t instanceId, bool mipAreValid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "MarkGPUTextureValid", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instanceId, mipAreValid);
}
inline void UnityEngine::Rendering::Texture2DAtlas::MarkGPUTextureInvalid(int32_t instanceId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "MarkGPUTextureInvalid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instanceId);
}
/// @param blitMips: bool (default: true)
/// @param overrideInstanceID: int32_t (default: static_cast<int32_t>(0xffffffff))
inline void UnityEngine::Rendering::Texture2DAtlas::BlitTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture,
                                                                ::UnityEngine::Vector4 sourceScaleOffset, bool blitMips, int32_t overrideInstanceID) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, scaleOffset, texture, sourceScaleOffset, blitMips, overrideInstanceID);
}
/// @param blitMips: bool (default: true)
/// @param overrideInstanceID: int32_t (default: static_cast<int32_t>(0xffffffff))
inline void UnityEngine::Rendering::Texture2DAtlas::BlitOctahedralTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture,
                                                                          ::UnityEngine::Vector4 sourceScaleOffset, bool blitMips, int32_t overrideInstanceID) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, scaleOffset, texture, sourceScaleOffset, blitMips, overrideInstanceID);
}
/// @param blitMips: bool (default: true)
/// @param overrideInstanceID: int32_t (default: static_cast<int32_t>(0xffffffff))
inline void UnityEngine::Rendering::Texture2DAtlas::BlitCubeTexture2D(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture, bool blitMips,
                                                                      int32_t overrideInstanceID) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, scaleOffset, texture, blitMips, overrideInstanceID);
}
/// @param overrideInstanceID: int32_t (default: static_cast<int32_t>(0xffffffff))
inline bool UnityEngine::Rendering::Texture2DAtlas::AllocateTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Vector4> scaleOffset, ::UnityEngine::Texture* texture,
                                                                    int32_t width, int32_t height, int32_t overrideInstanceID) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cmd, scaleOffset, texture, width, height, overrideInstanceID);
}
inline bool UnityEngine::Rendering::Texture2DAtlas::AllocateTextureWithoutBlit(::UnityEngine::Texture* texture, int32_t width, int32_t height, ByRef<::UnityEngine::Vector4> scaleOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "AllocateTextureWithoutBlit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, texture, width, height, scaleOffset);
}
inline bool UnityEngine::Rendering::Texture2DAtlas::AllocateTextureWithoutBlit(int32_t instanceId, int32_t width, int32_t height, ByRef<::UnityEngine::Vector4> scaleOffset) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, instanceId, width, height, scaleOffset);
}
inline int32_t UnityEngine::Rendering::Texture2DAtlas::GetTextureHash(::UnityEngine::Texture* textureA, ::UnityEngine::Texture* textureB) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "GetTextureHash", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, textureA, textureB);
}
inline int32_t UnityEngine::Rendering::Texture2DAtlas::GetTextureID(::UnityEngine::Texture* texture) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "GetTextureID", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, texture);
}
inline int32_t UnityEngine::Rendering::Texture2DAtlas::GetTextureID(::UnityEngine::Texture* textureA, ::UnityEngine::Texture* textureB) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "GetTextureID", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, textureA, textureB);
}
inline bool UnityEngine::Rendering::Texture2DAtlas::IsCached(ByRef<::UnityEngine::Vector4> scaleOffset, ::UnityEngine::Texture* textureA, ::UnityEngine::Texture* textureB) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "IsCached", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, scaleOffset, textureA, textureB);
}
inline bool UnityEngine::Rendering::Texture2DAtlas::IsCached(ByRef<::UnityEngine::Vector4> scaleOffset, ::UnityEngine::Texture* texture) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "IsCached", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, scaleOffset, texture);
}
inline bool UnityEngine::Rendering::Texture2DAtlas::IsCached(ByRef<::UnityEngine::Vector4> scaleOffset, int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "IsCached", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, scaleOffset, id);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::Texture2DAtlas::GetCachedTextureSize(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "GetCachedTextureSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int, false>(this, ___internal_method, id);
}
/// @param needMips: bool (default: false)
inline bool UnityEngine::Rendering::Texture2DAtlas::NeedsUpdate(::UnityEngine::Texture* texture, bool needMips) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, texture, needMips);
}
/// @param needMips: bool (default: false)
inline bool UnityEngine::Rendering::Texture2DAtlas::NeedsUpdate(::UnityEngine::Texture* textureA, ::UnityEngine::Texture* textureB, bool needMips) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, textureA, textureB, needMips);
}
inline bool UnityEngine::Rendering::Texture2DAtlas::AddTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Vector4> scaleOffset, ::UnityEngine::Texture* texture) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cmd, scaleOffset, texture);
}
/// @param updateIfNeeded: bool (default: true)
/// @param blitMips: bool (default: true)
inline bool UnityEngine::Rendering::Texture2DAtlas::UpdateTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* oldTexture, ::UnityEngine::Texture* newTexture,
                                                                  ByRef<::UnityEngine::Vector4> scaleOffset, ::UnityEngine::Vector4 sourceScaleOffset, bool updateIfNeeded, bool blitMips) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cmd, oldTexture, newTexture, scaleOffset, sourceScaleOffset, updateIfNeeded, blitMips);
}
/// @param updateIfNeeded: bool (default: true)
/// @param blitMips: bool (default: true)
inline bool UnityEngine::Rendering::Texture2DAtlas::UpdateTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* texture, ByRef<::UnityEngine::Vector4> scaleOffset,
                                                                  bool updateIfNeeded, bool blitMips) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cmd, texture, scaleOffset, updateIfNeeded, blitMips);
}
inline bool UnityEngine::Rendering::Texture2DAtlas::EnsureTextureSlot(ByRef<bool> isUploadNeeded, ByRef<::UnityEngine::Vector4> scaleBias, int32_t key, int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DAtlas*>::get(), "EnsureTextureSlot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, isUploadNeeded, scaleBias, key, width, height);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Texture2DAtlas::Texture2DAtlas() {}
