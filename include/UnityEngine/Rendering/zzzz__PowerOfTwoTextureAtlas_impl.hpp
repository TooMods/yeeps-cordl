#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__Texture2DAtlas_impl.hpp"
#include "UnityEngine/Rendering/zzzz__PowerOfTwoTextureAtlas_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__PowerOfTwoTextureAtlas_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::__PowerOfTwoTextureAtlas__BlitType::__PowerOfTwoTextureAtlas__BlitType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__PowerOfTwoTextureAtlas__BlitType::__PowerOfTwoTextureAtlas__BlitType() {}
constexpr ::UnityEngine::Rendering::__PowerOfTwoTextureAtlas__BlitType UnityEngine::Rendering::__PowerOfTwoTextureAtlas__BlitType::Padding{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::__PowerOfTwoTextureAtlas__BlitType UnityEngine::Rendering::__PowerOfTwoTextureAtlas__BlitType::PaddingMultiply{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::__PowerOfTwoTextureAtlas__BlitType UnityEngine::Rendering::__PowerOfTwoTextureAtlas__BlitType::OctahedralPadding{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::__PowerOfTwoTextureAtlas__BlitType UnityEngine::Rendering::__PowerOfTwoTextureAtlas__BlitType::OctahedralPaddingMultiply{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c::*)()>(
    &::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1a07d9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c._RelayoutEntries_b__23_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c::*)(
    ::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>, ::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>)>(
    &::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c::_RelayoutEntries_b__23_0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1a07da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c*>::get(), "<RelayoutEntries>b__23_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c::setStaticF___9(::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c*>::get>(
      std::forward<::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c*>(value));
}
inline ::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c* UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c*>::get>();
}
inline void UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c::setStaticF___9__23_0(::System::Comparison_1<::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>>*, "<>9__23_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c*>::get>(
      std::forward<::System::Comparison_1<::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>>*>(value));
}
inline ::System::Comparison_1<::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>>* UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c::getStaticF___9__23_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>>*, "<>9__23_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c*>::get>();
}
inline ::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c* UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c*>());
}
inline void UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c::_RelayoutEntries_b__23_0(::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int> c1,
                                                                                               ::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int> c2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c*>::get(), "<RelayoutEntries>b__23_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, c1, c2);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c::__PowerOfTwoTextureAtlas____c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(
    int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::StringW, bool)>(&::UnityEngine::Rendering::PowerOfTwoTextureAtlas::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1a05f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FilterMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.get_mipPadding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)()>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::get_mipPadding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1a06318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(),
                                                                               "get_mipPadding", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.GetTexturePadding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)()>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::GetTexturePadding)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1a06320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(),
                                                                               "GetTexturePadding", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.GetPayloadScaleOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(
    ::UnityEngine::Texture*, ByRef<::UnityEngine::Vector4>)>(&::UnityEngine::Rendering::PowerOfTwoTextureAtlas::GetPayloadScaleOffset)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1a06350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), "GetPayloadScaleOffset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.GetPayloadScaleOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (*)(
    ByRef<::UnityEngine::Vector2>, ByRef<::UnityEngine::Vector2>, ByRef<::UnityEngine::Vector4>)>(&::UnityEngine::Rendering::PowerOfTwoTextureAtlas::GetPayloadScaleOffset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1a06490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), "GetPayloadScaleOffset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.Blit2DTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4, ::UnityEngine::Texture*, ::UnityEngine::Vector4, bool, ::UnityEngine::Rendering::__PowerOfTwoTextureAtlas__BlitType)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::Blit2DTexture)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1a064c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), "Blit2DTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__PowerOfTwoTextureAtlas__BlitType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.BlitTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4, ::UnityEngine::Texture*, ::UnityEngine::Vector4, bool, int32_t)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::BlitTexture)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x1a0692c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.BlitTextureMultiply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4, ::UnityEngine::Texture*, ::UnityEngine::Vector4, bool, int32_t)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::BlitTextureMultiply)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x1a06b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), "BlitTextureMultiply", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.BlitOctahedralTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4, ::UnityEngine::Texture*, ::UnityEngine::Vector4, bool, int32_t)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::BlitOctahedralTexture)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x1a06c64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.BlitOctahedralTextureMultiply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4, ::UnityEngine::Texture*, ::UnityEngine::Vector4, bool, int32_t)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::BlitOctahedralTextureMultiply)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x1a06d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), "BlitOctahedralTextureMultiply", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.TextureSizeToPowerOfTwo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(::UnityEngine::Texture*, ByRef<int32_t>, ByRef<int32_t>)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::TextureSizeToPowerOfTwo)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1a06e6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), "TextureSizeToPowerOfTwo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.GetPowerOfTwoTextureSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(::UnityEngine::Texture*)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::GetPowerOfTwoTextureSize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1a06424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), "GetPowerOfTwoTextureSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.AllocateTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Vector4>, ::UnityEngine::Texture*, int32_t, int32_t, int32_t)>(&::UnityEngine::Rendering::PowerOfTwoTextureAtlas::AllocateTexture)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x1a06ea8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.ResetRequestedTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)()>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::ResetRequestedTexture)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1a072d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(),
                                                                               "ResetRequestedTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.ReserveSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(::UnityEngine::Texture*)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::ReserveSpace)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1a07328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), "ReserveSpace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.ReserveSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(::UnityEngine::Texture*, int32_t, int32_t)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::ReserveSpace)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1a07380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), "ReserveSpace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.ReserveSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(
    ::UnityEngine::Texture*, ::UnityEngine::Texture*, int32_t, int32_t)>(&::UnityEngine::Rendering::PowerOfTwoTextureAtlas::ReserveSpace)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1a07500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), "ReserveSpace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.ReserveSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::ReserveSpace)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x1a073dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), "ReserveSpace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.RelayoutEntries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)()>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::RelayoutEntries)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x1a07678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(),
                                                                               "RelayoutEntries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.GetApproxCacheSizeInByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int32_t, int32_t, bool, ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::GetApproxCacheSizeInByte)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1a07b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), "GetApproxCacheSizeInByte", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.GetMaxCacheSizeForWeightInByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, bool, ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::GetMaxCacheSizeForWeightInByte)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1a07c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), "GetMaxCacheSizeForWeightInByte", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::PowerOfTwoTextureAtlas::__cordl_internal_get_m_MipPadding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MipPadding;
}
constexpr int32_t const& UnityEngine::Rendering::PowerOfTwoTextureAtlas::__cordl_internal_get_m_MipPadding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MipPadding;
}
constexpr void UnityEngine::Rendering::PowerOfTwoTextureAtlas::__cordl_internal_set_m_MipPadding(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MipPadding = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Vector2Int>*& UnityEngine::Rendering::PowerOfTwoTextureAtlas::__cordl_internal_get_m_RequestedTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestedTextures;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Vector2Int>*> const&
UnityEngine::Rendering::PowerOfTwoTextureAtlas::__cordl_internal_get_m_RequestedTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestedTextures;
}
constexpr void UnityEngine::Rendering::PowerOfTwoTextureAtlas::__cordl_internal_set_m_RequestedTextures(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Vector2Int>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RequestedTextures)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
/// @param filterMode: ::UnityEngine::FilterMode (default: static_cast<int32_t>(0x0))
/// @param name: ::StringW (default: u"")
/// @param useMipMap: bool (default: true)
inline ::UnityEngine::Rendering::PowerOfTwoTextureAtlas* UnityEngine::Rendering::PowerOfTwoTextureAtlas::New_ctor(int32_t size, int32_t mipPadding,
                                                                                                                  ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                                                                  ::UnityEngine::FilterMode filterMode, ::StringW name, bool useMipMap) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(size, mipPadding, format, filterMode, name, useMipMap));
}
/// @param filterMode: ::UnityEngine::FilterMode (default: static_cast<int32_t>(0x0))
/// @param name: ::StringW (default: u"")
/// @param useMipMap: bool (default: true)
inline void UnityEngine::Rendering::PowerOfTwoTextureAtlas::_ctor(int32_t size, int32_t mipPadding, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::FilterMode filterMode,
                                                                  ::StringW name, bool useMipMap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FilterMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size, mipPadding, format, filterMode, name, useMipMap);
}
inline int32_t UnityEngine::Rendering::PowerOfTwoTextureAtlas::get_mipPadding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(),
                                                                             "get_mipPadding", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::PowerOfTwoTextureAtlas::GetTexturePadding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(),
                                                                             "GetTexturePadding", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::PowerOfTwoTextureAtlas::GetPayloadScaleOffset(::UnityEngine::Texture* texture, ByRef<::UnityEngine::Vector4> scaleOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), "GetPayloadScaleOffset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method, texture, scaleOffset);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::PowerOfTwoTextureAtlas::GetPayloadScaleOffset(ByRef<::UnityEngine::Vector2> textureSize, ByRef<::UnityEngine::Vector2> paddingSize,
                                                                                                    ByRef<::UnityEngine::Vector4> scaleOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), "GetPayloadScaleOffset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(nullptr, ___internal_method, textureSize, paddingSize, scaleOffset);
}
inline void UnityEngine::Rendering::PowerOfTwoTextureAtlas::Blit2DTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture,
                                                                          ::UnityEngine::Vector4 sourceScaleOffset, bool blitMips,
                                                                          ::UnityEngine::Rendering::__PowerOfTwoTextureAtlas__BlitType blitType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), "Blit2DTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__PowerOfTwoTextureAtlas__BlitType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, scaleOffset, texture, sourceScaleOffset, blitMips, blitType);
}
/// @param blitMips: bool (default: true)
/// @param overrideInstanceID: int32_t (default: static_cast<int32_t>(0xffffffff))
inline void UnityEngine::Rendering::PowerOfTwoTextureAtlas::BlitTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture,
                                                                        ::UnityEngine::Vector4 sourceScaleOffset, bool blitMips, int32_t overrideInstanceID) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, scaleOffset, texture, sourceScaleOffset, blitMips, overrideInstanceID);
}
/// @param blitMips: bool (default: true)
/// @param overrideInstanceID: int32_t (default: static_cast<int32_t>(0xffffffff))
inline void UnityEngine::Rendering::PowerOfTwoTextureAtlas::BlitTextureMultiply(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture,
                                                                                ::UnityEngine::Vector4 sourceScaleOffset, bool blitMips, int32_t overrideInstanceID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), "BlitTextureMultiply", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, scaleOffset, texture, sourceScaleOffset, blitMips, overrideInstanceID);
}
/// @param blitMips: bool (default: true)
/// @param overrideInstanceID: int32_t (default: static_cast<int32_t>(0xffffffff))
inline void UnityEngine::Rendering::PowerOfTwoTextureAtlas::BlitOctahedralTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture,
                                                                                  ::UnityEngine::Vector4 sourceScaleOffset, bool blitMips, int32_t overrideInstanceID) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, scaleOffset, texture, sourceScaleOffset, blitMips, overrideInstanceID);
}
/// @param blitMips: bool (default: true)
/// @param overrideInstanceID: int32_t (default: static_cast<int32_t>(0xffffffff))
inline void UnityEngine::Rendering::PowerOfTwoTextureAtlas::BlitOctahedralTextureMultiply(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset,
                                                                                          ::UnityEngine::Texture* texture, ::UnityEngine::Vector4 sourceScaleOffset, bool blitMips,
                                                                                          int32_t overrideInstanceID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), "BlitOctahedralTextureMultiply", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, scaleOffset, texture, sourceScaleOffset, blitMips, overrideInstanceID);
}
inline void UnityEngine::Rendering::PowerOfTwoTextureAtlas::TextureSizeToPowerOfTwo(::UnityEngine::Texture* texture, ByRef<int32_t> width, ByRef<int32_t> height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(),
                                                                             "TextureSizeToPowerOfTwo", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, texture, width, height);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::PowerOfTwoTextureAtlas::GetPowerOfTwoTextureSize(::UnityEngine::Texture* texture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), "GetPowerOfTwoTextureSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, texture);
}
/// @param overrideInstanceID: int32_t (default: static_cast<int32_t>(0xffffffff))
inline bool UnityEngine::Rendering::PowerOfTwoTextureAtlas::AllocateTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Vector4> scaleOffset, ::UnityEngine::Texture* texture,
                                                                            int32_t width, int32_t height, int32_t overrideInstanceID) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cmd, scaleOffset, texture, width, height, overrideInstanceID);
}
inline void UnityEngine::Rendering::PowerOfTwoTextureAtlas::ResetRequestedTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(),
                                                                             "ResetRequestedTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::PowerOfTwoTextureAtlas::ReserveSpace(::UnityEngine::Texture* texture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), "ReserveSpace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, texture);
}
inline bool UnityEngine::Rendering::PowerOfTwoTextureAtlas::ReserveSpace(::UnityEngine::Texture* texture, int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), "ReserveSpace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, texture, width, height);
}
inline bool UnityEngine::Rendering::PowerOfTwoTextureAtlas::ReserveSpace(::UnityEngine::Texture* textureA, ::UnityEngine::Texture* textureB, int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), "ReserveSpace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, textureA, textureB, width, height);
}
inline bool UnityEngine::Rendering::PowerOfTwoTextureAtlas::ReserveSpace(int32_t id, int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), "ReserveSpace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id, width, height);
}
inline bool UnityEngine::Rendering::PowerOfTwoTextureAtlas::RelayoutEntries() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(),
                                                                             "RelayoutEntries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t UnityEngine::Rendering::PowerOfTwoTextureAtlas::GetApproxCacheSizeInByte(int32_t nbElement, int32_t resolution, bool hasMipmap,
                                                                                        ::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), "GetApproxCacheSizeInByte", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, nbElement, resolution, hasMipmap, format);
}
inline int32_t UnityEngine::Rendering::PowerOfTwoTextureAtlas::GetMaxCacheSizeForWeightInByte(int32_t weight, bool hasMipmap, ::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>::get(), "GetMaxCacheSizeForWeightInByte", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, weight, hasMipmap, format);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PowerOfTwoTextureAtlas::PowerOfTwoTextureAtlas() {}
